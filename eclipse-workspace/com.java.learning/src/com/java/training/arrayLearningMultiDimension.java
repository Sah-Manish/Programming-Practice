package com.java.training;
import java.util.Scanner;
public class arrayLearningMultiDimension {

	public static void main(String[] args) {
		// Multi-Dimentional Array
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter length and width of 2D array :");
		int a = sc.nextInt();
		int b = sc.nextInt();
		int[][] arr = new int[a][b];
		for(int i=0;i<a;i++) {
			for(int j=0;j<b;j++) {
				System.out.println("Enter Element for arr["+i+"]["+j+"] :");
				arr[i][j]= sc.nextInt();
			}
		}
		System.out.println("Printing the matrix: ");
		for(int i=0;i<a;i++) {
			for(int j=0;j<b;j++){
				System.out.print(arr[i][j]+"  ");
			}
			System.out.println("\n");
		}
		// Calculating the sum of diagonals and non-diagonals eleents
		int sumOfDiagonal=0,sumOfNonDiagonal=0;
		for(int i=0;i<a;i++) {
			for(int j=0;j<b;j++){
				if(i==j) {
					sumOfDiagonal+=arr[i][j];
				}
				else {
					sumOfNonDiagonal+=arr[i][j];
				}
			}
		}
		System.out.println("Sum of Diagonal Elements :"+sumOfDiagonal);
		System.out.println("Sum of Non-Diagonal Elements :"+sumOfNonDiagonal);
		return;
	}

}
