package hw1.java;

import java.util.List;
import java.util.LinkedList;
public class SortedListsUnion 
{

	public static 
	List union ( List L1, List L2)
	
	{
		List newList = new LinkedList();
		
		int idx1 = 0;
		int idx2 = 0;
		
		while(idx1 < L1.size() && idx2 < L2.size())
		{
			if (((Comparable) L1.get(idx1)).compareTo(L2.get(idx2)) < 0)
	{
		newList.add(L1.get(idx1));
		idx1++;
		
	}

	else if (((Comparable) L1.get(idx1)).compareTo(L2.get(idx2)) > 0)
	{
		newList.add(L2.get(idx2));
		idx2++;
	}
	else 
	{
		newList.add(L1.get(idx1));
		idx1++;
		idx2++;
	}
	}
	while(idx1 < L1.size())
	{
	newList.add(L1.get(idx1));
	
	idx1++;
	}
	while(idx2 < L2.size())
	{
		newList.add(L2.get(idx2));
		
		idx2++;	
	}
		return newList; 
	}
		public static void main (String[] args)
		{
			List L1 = new LinkedList();
			List L2 = new LinkedList(); 
			
		       L1.add(10);
		       L1.add(30);
		       L1.add(50);
		       L1.add(60);
		       L1.add(80);
		       
		       // add several integers to L2 in sorted order
		       
		       L2.add(20);
		       L2.add(40);
		       L2.add(50);
		       L2.add(60);
		       L2.add(70);
		       L2.add(90);
		       
		       System.out.println("L1: " + L2);
		       System.out.println("L2: " + L2);
		       
		       List L3 = union(L1,L2);
		       
		       System.out.println("\nunion(L1,L2): " + L3);
		}
	}



