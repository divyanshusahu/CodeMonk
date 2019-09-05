import java.util.Scanner;
class a
{
	public static void main(String args[])
	{
		Scanner in = new Scanner (System.in);
		int l=in.nextInt();
		int r=in.nextInt();
		int k=in.nextInt();
		int rem=0;
		int count=0,i=l;
		if (k>r)
		System.out.println(count);
		else
		{
			while (i<=r)
			{
				if (i<k)
				i=k;
				if (i%k==0){
				count++; i=i+k; }
				else
				{rem=i%k;
				i=i+k-rem;}
			}
			System.out.println(count);
		}
	}
}
