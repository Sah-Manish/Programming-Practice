package com.java.learning;
import java.util.Scanner;
public class ErrorHandling {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter two numbers");
		int a=sc.nextInt();
		int b=sc.nextInt();
		try {
			int res=a/b;
			System.out.println(res);
		}
		catch(Exception e) {
			String errmsg = e.getMessage();
			System.out.println(errmsg);
		}
		sc.close();
		System.out.println("Code Complete ...");
	}

}
