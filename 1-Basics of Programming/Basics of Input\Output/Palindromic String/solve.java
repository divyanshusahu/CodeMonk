import java.util.Scanner;
class a
{
	public static void main(String args[])
	{
		Scanner in  = new Scanner (System.in);
		String s=in.nextLine();
		int l = s.length();
		int flag=1;
		for (int i=0,j=l-1;i<l/2;i++,j--)
		{
			if (s.charAt(i)!=s.charAt(j))
			{
				flag=0;
				break;
			}
		}
		if (flag==0)
		System.out.println("NO");
		else
		System.out.println("YES");
	}
}
