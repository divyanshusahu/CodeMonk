import java.util.Scanner;
class a
{
	public static void main(String args[])
	{
		Scanner in = new Scanner (System.in);
		int f=1;
		do
		{
			int n=in.nextInt();
			if (n!=42)
			System.out.println(n);
			else
			f=0;
		}
		while (f==1);
	}
}
