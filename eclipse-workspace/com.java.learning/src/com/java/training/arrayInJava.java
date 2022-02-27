package com.java.training;
import java.util.Scanner;
public class arrayInJava {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[] {1,2,3,4,5};
		for(int i=0; i<5; i++) {
			System.out.println(arr[i]);
		}
		sc.close();
	}

}
