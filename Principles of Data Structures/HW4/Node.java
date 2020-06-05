package Node;

import java.util.NoSuchElementException;
import java.util.Scanner; 

class Node 
{
protected int info;
protected Node next;
	
public Node()
{
	next = null;
	info = 0;
}
public Node(int data, Node node)
{
	info = data;
	next = node; 
}
public void setnextNode(Node node)
{
	next = node; 
}
public void setinfoNode(int data)
{
	info = data; 
}
public Node getnextNode()
{
	return next; 
}
public int getinfoNode()
{
	return info;
}
}

class DequeList
{
	private Node front, rear;
	private int listSize;
	
	public DequeList()
	{
		front = null;
		rear = null; 
		listSize = 0; 
	}
	
	public boolean isDequeEmpty()
	{
		return front == null;
	}
	
	public void push(int value)
	{
		Node ptr = new Node(value, null);
		//Increase the size of the list
		listSize++;
		
		if (front == null)
		{
			front = ptr;
			rear = front;
		}
		else
		{
			ptr.setnextNode(front);
			front = ptr;
		}
	}
	
	public void inject(int value)
	{
		Node ptr = new Node(value, null);
		//Increase the size of the list
		listSize++;
		
		if (front == null)
		{
			rear = ptr;
			front = rear;
		}
		else
		{
			rear.setnextNode(ptr);
			rear=ptr;
		}
	}
public int pop()
{
	if(isDequeEmpty())
	throw new NoSuchElementException("Underflow Exception");
	Node ptr = front;
	front = ptr.getnextNode();
	if (front == null)
	rear = null;
	listSize--;
	return ptr.getinfoNode();
	
}

public int eject()
{
	if(isDequeEmpty())
	throw new NoSuchElementException("Underflow Exception");
	int element = rear.getinfoNode();
	Node x = front;
	Node y = front; 
	
	while ( x !=rear)
	{
		y = x;
		x = x.getnextNode();
	}
rear = y;
listSize--;
return element; 
}

public void display_list()
{
	if (listSize == 0)
	{
		System.out.print("The list is empty\n");
		return;
	}
	System.out.print("\nThe elemetns in Dequeue are: ");
	
	Node ptr1 = front; 
	
	while (ptr1 != rear.getnextNode())
	{
		System.out.print(ptr1.getinfoNode()+" ");
		ptr1 = ptr1.getnextNode();
	}
	System.out.println();
}
}
class Main
{
	public static void main(String args[])
	{
		
		Scanner sc = new Scanner(System.in);
		DequeList odj = new DequeList();
		
		char ch;
		do
			
	{
		System.out.println(" Choose any operation" + " to implemnet Deque");
		System.out.println("1. Push(x)");
		System.out.println("2. Inject(x)");
		System.out.println("3. Pop");
		System.out.println("4. Eject");
		int option = sc.nextInt();

switch (option)
{
case 1:

System.out.println("Enter the element" + " you want to insert");
odj.push( sc.nextInt());
break; 

case 2:
	System.out.println("Enter the element" + " you want to insert");
	odj.inject( sc.nextInt());
	break;
	
case 3: try
{
	System.out.println("Deleted Element = " + odj.pop());
}

catch ( Exception e)
{
	System.out.println(e.getMessage());
}
break;

case 4: try
{
	System.out.println("Deleted Element = " + odj.eject());
}

catch ( Exception e)
{
	System.out.println(e.getMessage());
}
break;

default : System.out.println("Invalid input ");
break;
}
System.out.println(" Press y to continue, n to exit) " );
ch = sc.next().charAt(0); 
	}
		while ( ch == 'Y'|| ch == 'y');
		sc.close();
}
}