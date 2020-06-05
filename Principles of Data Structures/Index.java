package firstlab;

import java.util.Scanner;

public class Index 
{

	  static String vowels = "aeiou";

		public static int indexOfFirstVowel(String word)
		{
		
		String loweredWord = word.toLowerCase();
		
		for (int index = 0; index < loweredWord.length(); index++)

		{

		if (vowels.contains(String.valueOf(loweredWord.charAt(index))))

		{
			
		System.out.println(" The word: "+word);

		System.out.println(" Vowel found at "+index);

		return index;

		}

		}

		// handle cases where a vowel is not found

		return -1;

		}

		public static void main(String... s)

		{
	 System.out.println("Enter a word:   ");

		Scanner sc =new Scanner(System.in);

		String ss=sc.nextLine();


		indexOfFirstVowel(ss);

		}}
