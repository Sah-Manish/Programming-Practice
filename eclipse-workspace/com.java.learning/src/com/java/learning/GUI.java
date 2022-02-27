package com.java.learning;
import javax.swing.JOptionPane;
public class GUI {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String name = JOptionPane.showInputDialog("What is your Name");
		JOptionPane.showMessageDialog(null, "Hello "+name);
		int age = Integer.parseInt(JOptionPane.showInputDialog("What is your age"));
		JOptionPane.showMessageDialog(null, "You are "+age+" old");
		Double height = Double.parseDouble(JOptionPane.showInputDialog("What is your height"));
		JOptionPane.showMessageDialog(null, "Your height is "+height);
	}

}
