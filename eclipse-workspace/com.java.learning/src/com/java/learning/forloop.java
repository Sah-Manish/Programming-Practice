package com.java.learning;

public class forloop {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// Question on loop and if...else output predict
		int x=0;
		int y=0;
		System.out.println("z x y");
		for(int z=0;z<5;z++) {
			System.out.println(z+" "+x+" "+y);
			if((++x>2)&&(++y>2)) {
				x++;
			}
		}
		System.out.println("5 "+x+" "+y);
	}

}
