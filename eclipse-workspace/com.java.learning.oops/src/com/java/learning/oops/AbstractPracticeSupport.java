package com.java.learning.oops;
import java.util.Scanner;
public class AbstractPracticeSupport {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter two Numbers :");
		ClassC obj = new ClassC();
		int a = sc.nextInt();
		int b = sc.nextInt();
		System.out.println("Sum is "+obj.sum(a,b));
		System.out.println("Subtraction is "+obj.sub(a, b));
		System.out.println("Multiplication is"+obj.mul(a, b));
		System.out.println("Division is "+obj.div(a, b));
		sc.close();
	}

}
