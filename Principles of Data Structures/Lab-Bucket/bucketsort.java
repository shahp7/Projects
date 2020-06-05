package Buckets;
import java.util.*;
import java.util.Random;
public class bucketsort {
	 private static int[] getRandomNumbers (int sizearray)
    {
      int[]  number = new int[sizearray];
      Random randomGenerator = new Random();
      for (int index = 0; index < sizearray; index++)
        {
            number[index]=(randomGenerator.nextInt(1000));
        }
        return number;
    }
	
	 public static void main(String[] args) {
		 
		 int[] numbers = getRandomNumbers(100);
		 
		 ArrayList<Integer> bucket1 = new ArrayList<Integer>();
		 
		 ArrayList<Integer> bucket2 = new ArrayList<Integer>();
		 
		 ArrayList<Integer> bucket3 = new ArrayList<Integer>();
		 
		 for(int i = 0; i < 100;i++)
		 {
			 if(numbers[i] < 330)
				 
				 bucket1.add(numbers[i]);
			 
			 else if(numbers[i ]< 660)
				 
				 bucket2.add(numbers[i]);
			 
			 else 
				 
				 bucket3.add(numbers[i]);

		 }
		 
		 insertionSort(bucket1);
		 System.out.println("bucket 1 after the sort"  );
		 insertionSort(bucket2);
		 System.out.println("bucket 2 after the sort" );
		 insertionSort(bucket3);
		 System.out.println("bucket 3 after the sort" );
		 
		 int[] copy=new int[1];
		 
		 System.arraycopy(bucket1, 0, numbers, 0,bucket1.size());
		 
		 System.arraycopy(bucket2, 0, numbers, 330,bucket2.size());
		 
		 System.arraycopy(bucket3, 0, numbers, 660,bucket3.size());
		 
		 System.out.println("Origional: " + numbers);
		 
		 System.out.println("bucket 1" + bucket1);
		 
		 System.out.println("bucket 2" + bucket2);
		 
		 System.out.println("bucket 3" + bucket3);
		 
		 System.out.println("Origional list after assembly" + numbers);


		 
}
	
	
/** The method for sorting the numbers */
	  public static void insertionSort(ArrayList<Integer> list) {
	    for (int i = 1; i < list.size(); i++) {
	      /** insert list[i] into a sorted sublist list[0..i-1] so that
	           list[0..i] is sorted. */
	      int currentElement = list.get(i);
	      int k;
	      for (k = i - 1; k >= 0 && list.get(k) > currentElement; k--) {
	        list.set(k +1, list.get(k));
	      }

	      // Insert the current element into list[k+1]
	      list.set(k+1 , currentElement);
	    }
	  }
	}