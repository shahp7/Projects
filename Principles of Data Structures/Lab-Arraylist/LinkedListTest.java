package arraylist;

import java.util.LinkedList;
import java.util.List;
import java.util.Random;

public class LinkedListTest 
{

	public static void main(String[] args)
	{
	
	List<Integer> list1 = new LinkedList();  

    Random r = new Random();

    for(int i=1; i<=10; i++)

        list1.add(r.nextInt(101));

   

    System.out.println("Size of list: "+list1.size());

   

    System.out.println("Is list empty? "+list1.isEmpty());

   

    if(list1.contains(50) && list1.contains(75)) {

        System.out.println("list contains 50 and 75");

    }else{

        System.out.println("list does not contains 50 and 75");

    }

   

    list1.set(4, 9999);

    System.out.println(list1);

    System.out.println("Size of list: "+list1.size());

   

    list1.remove(8);

    System.out.println(list1);

    System.out.println("Size of list: "+list1.size());

   

    list1.set(4, 7777);

    System.out.println(list1);

    System.out.println("Size of list: "+list1.size());

   

    // yes we can remove 7777

    list1.remove(new Integer(7777));

    System.out.println(list1);

    System.out.println("Size of list: "+list1.size());

   

}

}



