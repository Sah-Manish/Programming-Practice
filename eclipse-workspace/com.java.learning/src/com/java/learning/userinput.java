package com.java.learning;
import java.util.Scanner;
public class userinput {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("What is your name?");
		String name = sc.nextLine();
		System.out.println("Hi "+name);
		System.out.println("How old are you?");
		int age = sc.nextInt();	// This will leave \n character in scanner object which will affect next input
		System.out.println("So, your age is "+age);
		System.out.println("what is your favourite anime?");
		sc.nextLine();
		String anime = sc.nextLine();
		System.out.println("I like that anime also!!!"+anime);
		// this will not ask for anime name for user to input
		
	}

}
