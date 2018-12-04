import java.util.Scanner;
class a
{
	public static void main(String args[])
	{
		Scanner in = new Scanner (System.in);
		int n=in.nextInt();
		int fact=n;
		for (int i=n-1;i>1;i--)
		fact=fact*i;
		System.out.println(fact);
	}
}
