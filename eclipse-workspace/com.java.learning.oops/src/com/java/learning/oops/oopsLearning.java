package com.java.learning.oops;
import java.util.Scanner;
public class oopsLearning {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// oops practice
				Scanner sc = new Scanner(System.in);
//				human p1 = new human("Manish Kumar",19);
//				p1.detailsPrint();
//				human p2 = new human("Ankit Kumar",18);
//				p2.detailsPrint();
				developer d1 = new developer("Manish Kumar",29);
				d1.detailsPrint();
				//p1.watch("Classroom of Elites....");
				System.out.println("Total no of objects.... "+human.count);
	}
}
class developer extends human{
	public developer(String name, int age) {
		super(name,age);
	}
}
class human{
	String name;
	int age;
	static int count; // property of class, not the object
	// default constructer
	public human() {
		count++;
		System.out.println("Creating a default Human constructer....");
	}
	public human(String name, int age) {
		this();
		this.name=name;
		this.age=age;
	}
	void detailsPrint() {
		System.out.println("Name\t:\t"+name+"\tAge\t:\t"+age);
	}
	void watch(String anime) {
		System.out.println(name+" loves "+anime+"....");
	}
	
}
