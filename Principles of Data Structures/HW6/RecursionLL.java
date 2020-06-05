package Lab6;

import java.util.*;

public class RecursionLL 
{
static int sum;

//main method
public static void main(String[] args)
{
	try
	{
		//Taking the input from the user
		System.out.print("Enter the number: ");
		
		//Create a Scanner Object.
		Scanner input = new Scanner(System.in);
		
		String str = input.next();
		
		int num = Integer.parseInt(str);
		
		// Calling the method t find the sum and display the result.
		System.out.print("The sum is : "+ sumDigits(num));	
}
	catch(Exception e)
	{
		System.out.print("Exception has occurred. Program will exit. ");
		System.exit(0);
	}
}

//Method to find the sum of the digits
public static int sumDigits(int n)
{
	if ( n> 0)
	{
		sum = sum + (int)n%10;
		sumDigits(n/10);
	}
return sum;
}
}
