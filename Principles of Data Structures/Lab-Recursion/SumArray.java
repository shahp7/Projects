package hw6.java;

import java.util.*;

public class SumArray 
{
    public static int sumArray(int[] iArray)
    {
        int sum = 0;
        
        for(int i = 0;i<iArray.length;i++)
        {
            sum += iArray[i];
        }
        
        return sum;
    }
    
  //main method
    public static void main(String args[]) 
    {
        System.out.println(sumArray(new int[]{1,2,3,4}));
    }
}