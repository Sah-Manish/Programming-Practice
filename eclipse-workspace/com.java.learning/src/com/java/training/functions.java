package com.java.training;
import java.util.Scanner;
public class functions {
	public static int calculateFactorial(int num) {
		if(num==0) {
			return 1;
		}
		else {
			return num*calculateFactorial(num-1);
		}
	}
	public static void main(String[] args) {
		// Functions in Java
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter numbers :");
		int n1 = sc.nextInt();
		int factorial = calculateFactorial(n1);
		System.out.println("Factorial of number "+n1+" is : "+factorial);
	}

}
