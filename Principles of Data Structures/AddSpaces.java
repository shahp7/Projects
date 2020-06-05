package hw6.java;

import java.util.*;

public class AddSpaces 
{
	  public static void addSpaces(String strWord) 
	  {
	        if(strWord.length() != 0) 
	        {
	            if(strWord.length() == 1) 
	            {
	                System.out.println(strWord.charAt(0));
	                
	            } else {
	                
	            	System.out.print(strWord.charAt(0) + " ");
	                
	            	addSpaces(strWord.substring(1));
	            }
	        }
	    }
	  
	//main method
	    public static void main(String[] args) {

	    	//Create a Scanner Object.
			Scanner input = new Scanner(System.in); 
			
             // output the value
			System.out.print("Enter a characters in one line: ");

			 String word = input.nextLine();

			 addSpaces(word);
	    } 

	}

