package com.java.learning.oops;

import java.util.Scanner;

public class ClassD implements InterfacePractice {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
	}
	public void displayName(String name) {
		System.out.println("Your name is "+name);
	}
	public String askName() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter your name :");
		String name=sc.nextLine();
		sc.close();
		return name;
	}
}