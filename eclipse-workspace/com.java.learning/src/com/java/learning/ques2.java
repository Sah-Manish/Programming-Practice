// To find sum of all even and odd numbers input by user
package com.java.learning;
import java.util.Scanner;
public class ques2 {
	public static void main(String[] args) {
		int sumOfOdd=0,sumOfEven=0,num,nNum;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter how many numbers you want to enter :");
		nNum = sc.nextInt();
		System.out.println("Enter "+nNum+" numbers");
		for(int i=1;i<=nNum;i++) {
			num=sc.nextInt();
			if(num%2==0) 
				sumOfEven+=num;
			else 
				sumOfOdd+=num;
		}
		System.out.println("Sum of all odd numbers is\t"+sumOfOdd);
		System.out.println("Sum of all even numbers is\t"+sumOfEven);
	}
}
