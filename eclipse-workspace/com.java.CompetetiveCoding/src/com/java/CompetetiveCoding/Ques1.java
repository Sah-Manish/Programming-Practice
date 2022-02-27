package com.java.CompetetiveCoding;
import java.util.Scanner;
public class Ques1{
	static boolean isPalindrome(String str,
					int low, int high)
	{
		while (low < high)
		{
			if (str.charAt(low) != str.charAt(high))
				return false;
			low++;
			high--;
		}
		return true;
	}
	static int possiblePalinByRemovingOneChar(String str)
	{
		int low = 0, high = str.length() - 1;
		while (low < high)
		{
			if (str.charAt(low) == str.charAt(high))
			{
				low++;
				high--;
			}
			else
			{
				if (isPalindrome(str, low + 1, high))
					return low;
				if (isPalindrome(str, low, high - 1))
					return high;
				return -1;
			}
		}
		return -2;
	}
	public static void main(String[] args)
	{
		String str;
        Scanner sc = new Scanner(System.in);
        str = sc.nextLine();
		int idx = possiblePalinByRemovingOneChar(str);

		if (idx == -2)
			System.out.println(-1);
		else
			System.out.println(str.charAt(idx));
        sc.close();
	}
}