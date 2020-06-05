package nodeLL;

import java.util.*;

public class TwoStacks
{
	  //total size of the array
    int size;

    //top1 for stack 1 and top 2 for stack 2
    int top1, top2;

    //Array to store elements means stack
    int stack[];

    // Constructor to initialize all instance variables
    public TwoStacks(int n)
    {
        //creating stack to store in elements
        stack = new int[n];

        size = n;

        top1 = -1;

        top2 = size;
    }

    //Method to push new element x to stack 1*/
   public void push1(int x)
    {
        // There is at least one empty space for
        // new element
        if (top1 < top2 - 1)
        {
            top1++;
            stack[top1] = x;
        }
        else
        {
            System.out.println("Stack Overflow");
            System.exit(1);
        }
    }

    //Method to push a new element to the stack 2*/
   public void push2(int x)
    {
        // There is at least one empty space for new element
        if (top1 < top2 -1)
        {
            top2--;
            stack[top2] = x;
        }
        else
        {
            System.out.println("Stack Overflow");
            System.exit(1);
        }
    }

    /* Method to Pop element from stack 1 , It will return  popped element*/
    public int pop1()
    {
        if (top1 >= 0)
        {
            int x = stack[top1];
            top1--;
            return x;
        }
        else
        {
            System.out.println("Stack Underflow");
            System.exit(1);
        }
        return 0;
    }

    /*Method to pop an element from second stack 2 ,It will return  popped element */
    public int pop2()
    {
        if(top2 < size)
        {
            int x =stack[top2];
            top2++;
            return x;
        }
        else
        {
            System.out.println("Stack Underflow");
            System.exit(1);

        }
        return 0;
    }

    //main method or Drive program
    public static void main(String args[])
    {
        //Instantiating  TwoStack class by passing the size of array
        TwoStacks twoStacks= new TwoStacks(5);

        //Some Push operations to both the stacks
        twoStacks.push1(5);
        twoStacks.push2(11);
        twoStacks.push2(25);
        twoStacks.push1(41);
        twoStacks.push2(77);

        //Calling pop1 to pop from stack1
        int element =twoStacks.pop1();
        System.out.println("Popped element from" +
                " Stack-1 is " + element);

        element =twoStacks.pop2();
        System.out.println("Popped element from" +
                " Stack-2 is " + element);

        //Push 20 to stack 2
        twoStacks.push2(20);


        element =twoStacks.pop2();
        System.out.println("Popped element from" +
                " Stack-2 is " + element);
    }
}
