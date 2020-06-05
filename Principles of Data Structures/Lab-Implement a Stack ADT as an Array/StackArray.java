package stackarray.java;

import java.util.*;

class Stack

{

// Instance variables to store data

private String arr[];

private int icapacity;

private int isize = 0;

// Default constructor

public Stack()

{

// Initial capacity is 4

icapacity = 4;

// Allocate memory

arr = new String[4];

isize = 0;

}// End of constructor

  

// Parameterized constructor. Receive capacity as a parameter

public Stack(int capacity)

{

// Assigns capacity to instance variable

this.icapacity = capacity;

// Allocates memory

arr = new String[capacity];

}// End of parameterized constructor

// Method to do Push operation

public void Push(String data)

{

// Checks if the stack is full

if (isFull())

{

// Calls the method to double the capacity

Resize();

// Copy the old contents by increasing the size of the array

arr = Arrays.copyOf(arr, icapacity);

}// End of if condition

// Assigns the data to array

arr[isize] = data;

// Increase the size by one

isize++;

// Displays the top element of stack

System.out.println(arr[isize-1]);

// Displays the complete information by calling method toString()

System.out.println(toString());   
System.out.println("----------");

}// End of method

// Method for Pop operation

public void Pop()

{

// Calls the isEmpty() method to check whether the stack is empty or not

if (isEmpty())   

System.out.println("Stack is empty.");

// Displays the stack top data

System.out.println(arr[--isize]);

// Assigns null

arr[isize] = null;

// Displays the complete information by calling method toString()

System.out.println(toString());   
System.out.println("----------");
}// End of method

  

// Method to resize the stack capacity

public void Resize()

{

// Double the capacity of the stack

icapacity = icapacity * 2 + 1;

}// End of method

  

// Method to check stack is empty or not

public boolean isEmpty()

{

// Checks if the size of the stack is zero return true

if (isize == 0)

return true;

// Otherwise return false

return false;

}// End of method

  

// Method to check stack is full or not

public boolean isFull()

{

// Checks if the size of the stack is equals to capacity then return true

if (isize == icapacity)

return true;

// Otherwise return false

return false;

}// End of method

  

// Method to return capacity of the stack

public int getCapacity()

{

return icapacity;

}// End of method

  

// Method to return size of the stack

public int getSize()

{

return isize;

}// End of method

  

// Method to return the array contents

public String getArray()

{

// Creates a temporary string and stores the bracket

String array = "[";

// Loops till length of the array

for(int x = 0; x < arr.length; x++)

// Concatenates array contents with comma

array = array + arr[x] + ", ";

// Concatenates right bracket

array = array + "]";

// Returns the string

return array;

}// End of method

  

// Overrides toString method

public String toString()

{

// Creates a temporary string

String res = "";

// Concatenates method return values

res += " isEmpty(): " + isEmpty() + ", getSize(): " + getSize() + ", getArray(): " + getArray();

// Returns result string

return res;

}// End of method

}// End of class

// Driver class StackArray definition

public class StackArray

{

// main method definition

public static void main(String ss[])

{

// Creates stack object with default capacity 4

Stack s = new Stack();

System.out.println(s);

// Calls the Push() and Pop() methods

System.out.print("\n push(): " );

s.Push("fourscore");

System.out.print("\n push(): " );

s.Push("and");

System.out.print("\n push(): " );

s.Push("seven");

System.out.print("\n push(): " );

s.Push("years");

System.out.print("\n push(): " );

s.Push("ago");

System.out.print("\n pop(): " );

s.Pop();

System.out.print("\n pop(): " );

s.Pop();

System.out.print("\n pop(): " );

s.Pop();

System.out.print("\n pop(): " );

s.Pop();

System.out.print("\n pop(): " );

s.Pop();

}// End of main method

}// End of driver class


