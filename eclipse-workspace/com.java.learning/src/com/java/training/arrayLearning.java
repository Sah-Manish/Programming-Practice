package com.java.training;
import java.util.Scanner;
public class arrayLearning {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// String Array
		//String[] names = {"Manish","Ankit","Fate","Tertium"};
		//Int Array
		//int[] marks = {10,15,100,100};
		//for(int i=0;i<marks.length;i++) {
		//	System.out.println(names[i]+"\t:\t"+marks[i]);
		//}
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Size of Array: ");
		int size=sc.nextInt();
		String[] names = new String[size];
		int[] marks = new int[size];
		for(int i=0;i<size;i++) {
			System.out.println("Enter Name : ");
			names[i] = sc.next();
			System.out.println("Enter Marks : ");
			marks[i] = sc.nextInt();
		}
		System.out.println("Entered Names and marks are desplayed :");
		for(int i=0;i<size;i++) {
			System.out.println(names[i]+"\t:\t"+marks[i]);
		}
		sc.close();
	}

}
