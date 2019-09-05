import java.util.Scanner;
class a
{
	public static void main(String args[])
	{
		Scanner in = new Scanner (System.in);
		int l=in.nextInt();
		int n=in.nextInt();
		int w,h;
		//int[] w = new int[n];
		//int[] h = new int[n];
		//for (int i=0;i<n;i++)
		//{
		//	w[i]=in.nextInt();
		//	h[i]=in.nextInt();
		//}
		for (int i=0;i<n;i++)
		{
			w=in.nextInt();
			h=in.nextInt();
			if (w<l || h<l)
			System.out.println("UPLOAD ANOTHER");
			else if (w==h && w>=l)
			System.out.println("ACCEPTED");
			else
			System.out.println("CROP IT");
		//	if (w[i]<l || h[i]<l)
		//	System.out.println("UPLOAD ANOTHER");
		//	else if (w[i]==h[i] && w[i]>=l)
		//	System.out.println("ACCEPTED");
		//	else
		//	System.out.println("CROP IT");
		}
	}
}
