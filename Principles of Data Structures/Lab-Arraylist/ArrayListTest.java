package arraylist;

import java.util.ArrayList;
import java.util.Random;

public class ArrayListTest 
{

	public static void main(String[] args)
	{
	
    ArrayList<Integer> list = new ArrayList<>();

    Random r = new Random();

    for(int i=1; i<=10; i++)

        list.add(r.nextInt(101));

   

    System.out.println("Size of list: "+list.size());

   

    System.out.println("Is list empty? "+list.isEmpty());

   

    if(list.contains(50) && list.contains(75)) {

        System.out.println("list contains 50 and 75");

    }else{

        System.out.println("list does not contains 50 and 75");

    }

   

    list.set(4, 9999);

    System.out.println(list);

    System.out.println("Size of list: "+list.size());

   

    list.remove(8);

    System.out.println(list);

    System.out.println("Size of list: "+list.size());

   

    list.set(4, 7777);

    System.out.println(list);

    System.out.println("Size of list: "+list.size());

   

    // yes we can remove 7777

    list.remove(new Integer(7777));

    System.out.println(list);

    System.out.println("Size of list: "+list.size());

   

}

}

