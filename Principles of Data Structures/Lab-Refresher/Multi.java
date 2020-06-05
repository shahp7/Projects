package firstlab;

	import java.util.Scanner;

	import java.lang.String;

	public class Multi

	{

	public static void main (String args[])

	{

	String color;

	while (true) { //INFINTE TIMES (TRAFFIC SIGNAL ALWAYS ON)

	System.out.println("Enter the light color");

	Scanner i = new Scanner(System.in);

	color = i.next(); //READ THE COLOR

	if (color.equals("green")) {

	System.out.println("Go"); //PRINTS GO IF GREEN LIGHT

	}else if (color.equals("red")) {

	System.out.println("Stop"); //PRINTS STOP IF RED LIGHT

	}

	else if (color.equals("yellow")) {

	System.out.println("Caution"); //PRINTS CAUTION IF ORANGE LIGHT

	}

	else

	System.out.println("Invalid Input"); //PRINTS INVALID OPTION

	}

	}

	}