import java.util.Scanner;
class a
{
	public static void main(String args[])
	{
		Scanner in = new Scanner (System.in);
		int n=in.nextInt();
		long[] a = new long[n];
		for (int i=0;i<n;i++)
		a[i]=in.nextLong();
		long s1=0,s2=0,s3=0;
		int i,j,k;
		for (i=0,j=1,k=2;i<n;i=i+3,j=j+3,k=k+3)
		{
			s1=s1+a[i];
			if (j<n)
			s2=s2+a[j];
			if (k<n)
			s3=s3+a[k];
		}
		System.out.println(s1 + " " +s2 + " "+s3);
	}
}
