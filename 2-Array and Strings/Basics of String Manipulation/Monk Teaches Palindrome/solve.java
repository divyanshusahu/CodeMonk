import java.util.Scanner;
class a
{
	public static void main (String args[])
	{
		Scanner in = new Scanner (System.in);
		int t=in.nextInt();
		int c=0;
		for (int i=0;i<t;i++)
		{
			String s=in.nextLine();
			if (c==0){
			s=in.nextLine(); c=1; }
			int l=s.length();
			int flag=1;
			for (int j=0,k=l-1;j<(l/2);j++,k--)
			{
				if (s.charAt(j)!=s.charAt(k))
				{
					flag=0;
					break;
				}
			}
			if (flag==0)
			System.out.println("NO");
			else if (l%2==0)
			System.out.println("YES EVEN");
			else
			System.out.println("YES ODD");
		}
	}
}
