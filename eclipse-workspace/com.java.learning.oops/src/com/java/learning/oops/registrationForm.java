package com.java.learning.oops;
import java.util.Scanner;
public class registrationForm {
	String name,course,address,phoneNo;
	float percentage;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	}
	void acceptDetails() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter name:");
		name=sc.nextLine();
		System.out.println("Enter course:");
		course=sc.nextLine();
		System.out.println("Enter address:");
		address=sc.nextLine();
		System.out.println("Enter phone number:");
		phoneNo=sc.nextLine();
		System.out.println("Enter percentage:");
		percentage=sc.nextFloat();
		sc.close();
	}
	void showDetails() {
		System.out.println("Name : "+name);
		System.out.println("Course : "+course);
		System.out.println("Address : "+address);
		System.out.println("Phone Number : "+phoneNo);
		System.out.println("Percentage : "+percentage);
	}
}
