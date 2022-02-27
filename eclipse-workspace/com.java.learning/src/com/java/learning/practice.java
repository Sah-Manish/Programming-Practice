package com.java.learning;
import java.util.Scanner;
public class practice {

	public static void main(String[] args) {
		// Practice Java
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number to print table");
		int num = sc.nextInt();
		for(int i=1;i<11;i++) {
			System.out.println(num+" * "+i+"\t=\t"+num*i);
		}
	}

}
