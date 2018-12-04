import java.util.Scanner;
class a
{
	public static void main(String args[])
	{
		Scanner in = new Scanner (System.in);
		int n = in.nextInt();
		int[] a = new int[n];
		for (int i=0;i<n;i++)
		a[i]=in.nextInt();
		long m=1;
		double x=Math.pow(10,9);
		x=x+7;
		long y = (long)x;
		for (int i=0;i<n;i++)
		m=(m*a[i])%y;
		System.out.println(m);
	}
}
