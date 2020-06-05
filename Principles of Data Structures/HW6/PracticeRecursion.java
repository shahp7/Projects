package Lab6;

import java.util.*;

public class PracticeRecursion
{
	//main method   
	public static void main(String[] args) {

		//Create a Scanner Object.
        Scanner input = new Scanner(System.in);
        
      //Taking the input from the user
        System.out.print("Enter a characters in one line: ");

        String s = input.nextLine();
        
//output the values
        System.out.println("The number of uppercase letters = " + count(s.toCharArray()));

    }

    public static int count(char[] chars) {

        return count(chars, chars.length - 1);

    }

    public static int count(char[] chars, int high) {

        int count = Character.isUpperCase(chars[high]) ? 1 : 0;

        if (high == 0)

            return count;

        else

            return count + count(chars, high - 1);

    }

}

	   