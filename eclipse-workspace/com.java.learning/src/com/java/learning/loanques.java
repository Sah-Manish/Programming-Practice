package com.java.learning;
import java.util.Scanner;
public class loanques {

	public static void main(String[] args) {
		// loan question to print whether a person is eligible for loan or not
		// salary	loan type 	Eligible loan amount	Emi (S)
		// >25000	C->Car			500000				36
		// >50000	H->House		6000000				60
		// >75000	B->Business		7500000				84
		Scanner sc = new Scanner(System.in);
//		System.out.println("Enter Acount number");
//		int accno  = sc.nextInt();
		System.out.println("Enter Account Balance");
		int accbal = sc.nextInt();
		System.out.println("Enter Salary");
		int sal = sc.nextInt();
		System.out.println("Enter Loan Type");
		System.out.println("C->Car\nH->House\nB->Bussiness");
		char loantype = sc.next().charAt(0);
		System.out.println("Enter Expected Loan Amount");
		int loan = sc.nextInt();
		if(accbal>1000) {
			if(sal>75000 && loan < 7500000) {
				if(loantype=='C') {
					System.out.println("Eligible for Car loan with no. of EMI(s) = 36");
				}
				else if(loantype=='H') {
					System.out.println("Eligible for House loan with no. of EMI(s) = 60");
				}
				else {
					System.out.println("Eligible for Bussiness loan with no. of EMI(s) = 84");
				}
			}
			else if(sal>50000 && loan < 6000000) {
				if(loantype=='C') {
					System.out.println("Eligible for Car loan with no. of EMI(s) = 36");
				}
				else if(loantype=='H') {
					System.out.println("Eligible for House loan with no. of EMI(s) = 60");
				}
				else {
					System.out.println("Not Eligible for Loan apart from Car or House Loan");
				}
			}
			else if(sal>25000 && loan<500000) {
				if(loantype=='C') {
					System.out.println("Eligible for Car loan with no. of EMI(s) = 36");
				}
				else {
					System.out.println("Not Eligible for Loan apart from Car Loan");
				}
			}
			else {
				System.out.println("You are not Eligible for Loan.");
			}
		}
		else {
			System.out.println("Not eligible for loan due to insufficient balance");
		}
		
	}

}
