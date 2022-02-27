package com.java.learning.oops;
import java.util.Scanner;
public class BookDetails {
	String bookName, ISBMcode;
	int publishYear, bookCount, bookEdition;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	}
	void acceptBookDetails() {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Book Name: ");
		bookName=sc.nextLine();
		System.out.println("Enter ISBM book Code: ");
		ISBMcode=sc.nextLine();
		System.out.println("Enter Publish Year: ");
		publishYear=sc.nextInt();
		System.out.println("Enter Book Count: ");
		bookCount=sc.nextInt();
		System.out.println("Enter Book Edition: ");
		bookEdition=sc.nextInt();
		sc.close();
	}
	void printDetails() {
		System.out.println("Book Name :" + bookName);
		System.out.println("Book ISBM Code :" + ISBMcode);
		System.out.println("Book Publish Year :" + publishYear);
		System.out.println("Book Count :" + bookCount);
		System.out.println("Book Edition :" + bookEdition);
	}
}