package hw1.java;

import java.util.*;
import java.util.ArrayList;

public class PrintLotTest 
{
	   public static void main (String[] args) throws java.lang.Exception
	   {
	       ArrayList<String> L = new ArrayList<String>();
	       L.add("10");
	       L.add("20");
	       L.add("30");
	       L.add("40");
	       L.add("50");
	       L.add("60");
	       L.add("70");
	       L.add("80");
	       L.add("90");
	       L.add("100");
	       ArrayList<Integer> P = new ArrayList<Integer>();
	       P.add(1);
	       P.add(3);
	       P.add(4);
	       P.add(6);
	       
			System.out.println("Elements: " + L);
			System.out.println("Positions: " + P);
			System.out.println();
			
			// Call the method printLots().
			
	       printLots(L,P);
	   }
	   static void printLots(ArrayList L,ArrayList<Integer> P)
	   {
	       System.out.println("------Values in L[] at P[]th Location------\n");
	   	//Start the for loop.
	   	
	   	for(int i=0; i < P.size(); i++)
	   	{
	   		//Store the first element
	   		
	   		int pos = P.get(i);
	   		System.out.println(pos + "\t" + L.get(pos));
	   	}
	   	}
	}
