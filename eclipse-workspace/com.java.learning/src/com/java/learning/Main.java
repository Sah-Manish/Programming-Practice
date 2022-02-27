package com.java.learning;
import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Hello World");
		System.out.println("I love Anime");
		System.out.println("Enter your favourite anime");
		// User Input
		Scanner sc = new Scanner(System.in);
		String anime = sc.nextLine();
		System.out.println("Your favourite anime is :"+anime);
	}
}
