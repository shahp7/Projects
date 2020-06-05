package LabBTrees;

import java.util.*;

public class Btree {

	// create array lists and data list

	static ArrayList<String> list = new ArrayList<String>();

	static ArrayList<String> root = new ArrayList<String>();

	static ArrayList<String> list2 = new ArrayList<String>();

	static String[] data = new String[] {"R","Y","F","X","A","M","C","D","E"};

	public static void main(String args[]) {

	for(int i=0; i< data.length; i++){

	System.out.print("  "+ data[i] );

	if(list.size() > 4){

	if(root.size() == 0){

	root.add(data[i]);

	list2 = transplantBlock( list, 2, 3 ); // move last 3 elements of `list` to `list2`

	}

	}else{

	list.add(data[i]);

	Collections.sort(list); //sort array list alphabetically

	}

	System.out.print(", List: [");

	for(String counter: list){

	//if(list.size())

	System.out.print(counter + ", ");

	}

	System.out.print("], Root: [");

	for(String counter: root){

	System.out.print(counter);

	}

	System.out.print("], List2: [");

	for(String counter: list2){

	System.out.print(counter + ", ");

	}

	System.out.println("]\n");

	}

	}

	public static ArrayList<String> transplantBlock( ArrayList<String> fromList,

	int start, //start index

	int n ) { // number of elements

	ArrayList<String> toList = new ArrayList<String>();

	for (int i = 0; i < n; i++) {

	if (fromList.size() > start) {

	String removed = fromList.remove(start);

	toList.add(removed);

	}

	}

	return toList;

	}

	}
