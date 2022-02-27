import java.util.Scanner;
class ques1
{
	static int nextPowerOf2(int n)
	{
		int count = 0;
		if (n > 0 && (n & (n - 1)) == 0)
			return n;
		while(n != 0)
		{
			n >>= 1;
			count += 1;
		}
		return 1 << count;
	}
	public static void main(String args[])
	{
        Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println(nextPowerOf2(n));
	}
}
