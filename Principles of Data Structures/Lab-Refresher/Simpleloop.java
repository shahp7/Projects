package firstlab;

public class Simpleloop {

	public static void main(String[] args) 
	{
		double number;

		int square;

		System.out.println("Number\tSquare");

		for (number=1; number<=20; number++)

		{

		square=(int)Math.pow(number,2);

		System.out.println((int)number+"\t"+(int)square);

		}

		}

		}