/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args)
	{
		// your code goes here
		Scanner in = new Scanner (System.in);
		char[] a = new char[100];
		a=in.next().toCharArray();
		int l=a.length;
		int n;
		for (int i=0;i<l;i++)
		{
			n=(int) a[i];
			if (n>=65 && n<=90)
			n=n+32;
			else
			n=n-32;
			a[i]=(char) n;
		}
		System.out.println(a);
	}
}
