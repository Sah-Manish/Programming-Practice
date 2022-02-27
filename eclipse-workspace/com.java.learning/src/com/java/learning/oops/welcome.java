package com.java.learning.oops;
import java.util.Scanner;
import javax.swing.JOptionPane;
import javax.swing.JFrame;
import java.util.Random;
public class welcome {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		random();
		sc.close();
	}
	public static int sum(int a, int b) {
		return (a+b);
	}
	public static void display() {
		JFrame frame = new JFrame();
		JOptionPane.showMessageDialog(frame, "Manish is kool...");
	}
	public static void stringPlay() {
		Scanner sc = new Scanner(System.in);
		String s1 = "Manish Kumar";
		String name = sc.next();
		for(int i=0;i<s1.length();i++) {
			System.out.println(s1.charAt(i));
		}
		System.out.println(s1.compareTo(name));
		sc.close();
	}
	public static void random() {
		Random rnd = new Random();
		for(int i=0;i<100;i++) {
			System.out.println(rnd.nextInt(100));
		}
	}
}
	
	


