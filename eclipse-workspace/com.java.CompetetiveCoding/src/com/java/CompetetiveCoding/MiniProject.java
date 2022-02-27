package com.java.CompetetiveCoding;
import java.util.Scanner;
public class MiniProject {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int[] EmpNo = new int[7];
		String[] EmpName = new String[7];
		String[] JoinDate = new String[7];
		String[] DesignationCode = new String;
		sc.close();
	}
	// Searching emp id in emp id array and returning the position
	public static int search(int[] arr, int EmpNo, int length) {
		int flag=0,pos=-1;
		for(int i=0; i<length; i++) {
			if(arr[i]==EmpNo) {
				flag=1;
				pos=i;
			}
		}
		if(flag==0) {
			return -1;
		}
		else {
			return pos;
		}
	}
}
