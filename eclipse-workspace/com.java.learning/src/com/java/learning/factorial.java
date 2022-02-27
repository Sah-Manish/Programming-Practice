package com.java.learning;
import java.util.Scanner;
public class factorial {
	public static void main(String []Args) {
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[5];
		System.out.println("Enter 5 numbers: ");
		for(int i=0; i<5; i++) {
			int x = sc.nextInt();
			arr[i]=fact(x);
		}
		for(int i=0; i<5; i++) {
			System.out.println(arr[i]);
		}
		sc.close();
	}
	public static int fact(int num) {
		if(num==0) {
			return 1;
		}
		else {
			return num*fact(num-1);
		}
	}
}
