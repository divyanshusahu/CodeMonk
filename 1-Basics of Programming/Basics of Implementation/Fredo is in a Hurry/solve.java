import java.util.Scanner;
class a
{
	public static void main (String args[])
	{
		Scanner in = new Scanner (System.in);
		int t=in.nextInt();
		for (int i=0;i<t;i++)
		{
			int n=in.nextInt();
			int x=1;
			double c=x*x+3*x-2*n;
			while (c<=0)
			{
				x++;
				c=x*x+3*x-2*n;
			}
			x=x-1;
			if (n==1)
			System.out.println("1");
			else
			System.out.println(2*(n-x));
		}
	}
}
