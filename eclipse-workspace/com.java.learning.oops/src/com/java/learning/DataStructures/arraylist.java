package com.java.learning.DataStructures;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.ListIterator;	// both ways traversal
import java.util.Scanner;
public class arraylist {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		ArrayList<String> names = new ArrayList<>();
		System.out.println("Enter no. of names yoou want to enter :");
		int num = sc.nextInt();
		while(num>0) {
			System.out.println("Enter name :");
			String name = sc.next();
			names.add(name);
			num--;
		}
		// backward traversal
		System.out.println("Traversal in Backward order :");
		ListIterator<String> bw = names.listIterator();
		while(bw.hasPrevious()) {
			System.out.println(bw.previous());
		}		
		Iterator<String> ite = names.iterator();
		System.out.println("Traversal of Array List using Iterator Class :");
		while(ite.hasNext()) {
			System.out.println(ite.next());
		}
		System.out.println("Traversal of Array List using loop :");
		for(String i:names) {
			System.out.println(i);
		}
		sc.close();
	}

}
