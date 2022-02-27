package com.java.learning;
import java.util.Scanner;
public class ShoppingCart {
	static item[] cartitems = new item[25];
	static int counter=0;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		item i1=new item();
		item i2=new item();
		i1.name="Pen"; i1.price=10.00f;
		i2.name="NoteBook"; i2.price=30.00f;
		add(i1); add(i2);
		System.out.println("Total is: "+total());
		sc.close();
	}
	public static void add(item item_name) {
		cartitems[counter]=item_name;
		System.out.println("Item added");
		System.out.println("Item name: "+item_name.name);
		System.out.println("Item price: "+item_name.price);
		counter++;
	}
	public static float total() {
		float t_price=0f;
		for(int i=0; i<counter; i++) {
			item itemname=cartitems[i];
			t_price+=itemname.price;
		}
		return t_price;
	}
}
