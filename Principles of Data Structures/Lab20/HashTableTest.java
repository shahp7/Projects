package Lab20;
import java.util.Scanner;

class HashTableXX
{
private int currentSize, maxSize;
private String[] keys;
private String[] vals;   

public HashTableXX(int capacity)
{
currentSize = 0;
maxSize = capacity;
keys = new String[maxSize];
vals = new String[maxSize];
}  

public void makeEmpty()
{
currentSize = 0;
keys = new String[maxSize];
vals = new String[maxSize];
}

public int getSize()
{
return currentSize;
}

public boolean isFull()
{
return currentSize == maxSize;
}

public boolean isEmpty()
{
return getSize() == 0;
}

public boolean contains(String key)
{
return get(key) != null;
}

private int hash(String key)
{
return key.length();
}   

public void insert(String key, String val)
{   
int tmp = hash(key);
int i = tmp;
do
{
if (keys[i] == null)
{
keys[i] = key;
vals[i] = val;
currentSize++;
return;
}
if (keys[i].equals(key))
{
vals[i] = val;
return;
}   
i = (i + 1) % maxSize;   
} while (i != tmp);
}

public String get(String key)
{
int i = hash(key);
while (keys[i] != null)
{
if (keys[i].equals(key))
return vals[i];
i = (i + 1) % maxSize;
}   
return null;
}

public void remove(String key)
{
if (!contains(key))
return;

int i = hash(key);
while (!key.equals(keys[i]))
i = (i + 1) % maxSize;   
keys[i] = vals[i] = null;

/** rehash all keys **/   
for (i = (i + 1) % maxSize; keys[i] != null; i = (i + 1) % maxSize)
{
String tmp1 = keys[i], tmp2 = vals[i];
keys[i] = vals[i] = null;
currentSize--;  
insert(tmp1, tmp2);   
}
currentSize--;   
}

public void printHashTable()
{
System.out.println("\nHash table with Linear Probing:  ");
for (int i = 0; i < maxSize; i++)
System.out.println("Table["+i+"]"+":"+ vals[i]);
System.out.println();
}
}

public class HashTableTest
{
public static void main(String[] args)
{
Scanner scan = new Scanner(System.in);
System.out.print("original line: [ ");
String quote=scan.nextLine();

HashTableXX lpht = new HashTableXX(10);
String[] words=quote.split(" ");
for (String string : words) {
System.out.println(string);

}
for (String string : words) {
lpht.insert(string,string);
}

lpht.printHashTable();  
}
}
