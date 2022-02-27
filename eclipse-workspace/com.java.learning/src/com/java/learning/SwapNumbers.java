package com.java.learning;

public class SwapNumbers {

	public static void main(String[] args) {
		// Swap using third variable
		int x=10,y=20;
		System.out.println("Values before swapping");
		System.out.println("x = :"+x+" and y = :"+y);
		int temp;
		temp=x;
		x=y;
		y=temp;
		System.out.println("Values after swapping");
		System.out.println("x = :"+x+" and y = :"+y);
	}

}
