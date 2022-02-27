package com.java.CompetetiveCoding;
import java.util.Scanner;
public class ques4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		checkPallindrome(num);
		sc.close();
	}
	public static void checkPallindrome(int num) {
		int temp=num;
		int rem=0;
		while(temp>0) {
			rem=rem*10+temp%10;
			temp=temp/10;
		}
		if(rem==num) {
			System.out.println("YES");
		}
		else {
			System.out.println("NO");
		}
	}
	

}
