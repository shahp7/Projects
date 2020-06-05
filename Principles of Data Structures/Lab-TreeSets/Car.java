package Lab7;
import java.util.TreeSet;

public class Car implements Comparable<Car>{

//instance member variables

int price;

int year;

String make ;

String model;

//parameterized constructor

Car(int price,int year, String make , String model){

this.price= price;

this.year=year;

this.make=make ;

this.model=model;

}

public static void main(String[] args) {

//car objects

Car c1=new Car(1000, 2011, "SSS", "DDDD");

Car c2=new Car(7000, 2014, "VVV", "NNNN");

Car c3=new Car(2000, 2018, "EEE", "RRRR");

TreeSet tree1=new TreeSet();

tree1.add(c1);

tree1.add(c2);

tree1.add(c3);

System.out.println(tree1);

}//end of main method

//meaning full car object representation

public String toString() {

return "price="+price+", year="+year+", make="+make+", model="+model;

}

//sorts according to the comparison.

public int compareTo(Car obj) {

int prce= obj.price;

if(prce < price)

return 1;

else if(prce > price)

return -1;

return 0;

}

}//class Car ends