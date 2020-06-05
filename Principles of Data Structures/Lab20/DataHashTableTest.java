package Lab20;
import java.util.Scanner;
import java.util.Random;
class MyStringRandomGen {

private static final String CHAR_LIST =
"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
private static final int RANDOM_STRING_LENGTH = 5;

public static String generateRandomString(){

StringBuffer randStr = new StringBuffer();
for(int i=0; i<RANDOM_STRING_LENGTH; i++){
int number = getRandomNumber();
char ch = CHAR_LIST.charAt(number);
randStr.append(ch);
}
return randStr.toString();
}


private static int getRandomNumber() {
int randomInt = 0;
Random randomGenerator = new Random();
randomInt = randomGenerator.nextInt(CHAR_LIST.length());
if (randomInt - 1 == -1) {
return randomInt;
} else {
return randomInt - 1;
}
}
}

class DataHashTable
{
private int currentSize, maxSize;
private String[] keys;
private String[] vals;
private Boolean[] collisons;


public DataHashTable(int capacity)
{
currentSize = 0;
maxSize = capacity;
keys = new String[maxSize];
vals = new String[maxSize];
collisons = new Boolean[maxSize];
}  

public void makeEmpty()
{
currentSize = 0;
keys = new String[maxSize];
vals = new String[maxSize];
collisons = new Boolean[maxSize];
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

public int hash(String key)
{
return key.hashCode() % maxSize;
}   

public void insert(String key, String val)
{   
int tmp = hash(key);
int i = tmp;
if (keys[i]!=null) {
collisons[i]=false;
}
else
{
collisons[i]=true;

}
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
System.out.println("Hash Table: ");
for (int i = 0; i < maxSize; i++)
System.out.println(+i+":"+"["+ vals[i] + "] h1: " + keys[i].hashCode());
System.out.println("--------------- " );
for (int i = 0; i < maxSize; i++)
System.out.println("hash table["+i+"]"+":"+ collisons[i]);
int count=0;
for (int i = 0; i < maxSize; i++)  
{
if((collisons[i]!=null) &&(!collisons[i]))
count++;
}
System.out.println("--------");
System.out.println("Collisons found: "+count);
}
}

public class DataHashTableTest
{
public static void main(String[] args)
{
Scanner scan = new Scanner(System.in);
DataHashTable lpht = new DataHashTable(100);
for (int i = 0; i < 100; i++) {
String string=MyStringRandomGen.generateRandomString();
lpht.insert(string,string);
}
lpht.printHashTable();  
}
}
