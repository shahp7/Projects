package shellsort;
import java.util.*;
public class SheelSortLL {

	public static void main(String[] args) {
		int iArray[] = {1,9,2,10,3,11,4,12,5,13,6,14,7,15,8,16};
		System.out.println("Before: " + Arrays.toString(iArray));
		SheelSortLL object = new SheelSortLL();
		object.sort(iArray);
	}
		static void printArray(int arr[])
		{
		int n = arr.length;
		for (int i=0; i<n; ++i)
		System.out.print(arr[i] + " ");
		System.out.println();
		}
		int sort(int arr[])
		{
		int n = arr.length;
		for (int gap = n/2-1; gap > 0; gap -= 2)
		{
		for (int i = gap; i < n; i += 1)
		{
		int temp = arr[i];
		int j;
		for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
		arr[j] = arr[j - gap];
		arr[j] = temp;
		}
		System.out.println("After [" + gap + "]-sort: " + Arrays.toString(arr));
		}
		return 0;
		}	
	}

