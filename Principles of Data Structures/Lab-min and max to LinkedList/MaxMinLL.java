package MaxMinLL;

import java.util.*;
import java.util.LinkedList;

public class MaxMinLL {

	private static LinkedList <Integer> queue;

	public MaxMinLL()
	{
		queue = new LinkedList<>();
	}
	public static int findMin() {
		int min = Integer.MAX_VALUE;
		for(Integer i: queue) {
		if( min > i) {
			min = i;
		}
		
		}
		return min;
	}
		
		public static int findMax() {
			int max = Integer.MIN_VALUE;
			for(Integer i: queue) {
			if( max < i) {
				max = i;
			}
			
			}
			return max;
			
	}
		
		public static void removeMin() {
			Integer min = findMin();
			queue.remove(min);
		}
		
		public static void removeMax() {
			Integer max = findMax();
			queue.remove(max);
		}
	public static void main(String [] args) {
		
		 
		queue = new LinkedList<>();
		queue.add(0);
		queue.add(4);
		queue.add(3);
		queue.add(0);
		queue.add(3);
		queue.add(0);
		queue.add(1);
		queue.add(9);
		queue.add(7);
		queue.add(7);
		
		System.out.println(queue);
		System.out.println("findMin(): " +findMin());
		removeMin();
		System.out.println("removeMin(): "+queue);
		System.out.println("findMax(): " +findMax());
		removeMax();
		System.out.println("removeMax(): " +queue);
		
		
		
		}

	}