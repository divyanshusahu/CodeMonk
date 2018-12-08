#include <bits/stdc++.h>
using namespace std;

int divisor(int n)
{
	if (n==1)
		return 1;
	
	int count = 0;
	for (int i=1;i*i<=n; i++)
	{
		if (n%i==0)
			count++;
	}

	int x = sqrt(n);
	if (x*x==n)
		return 2*count-1;

	return 2*count;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<divisor(n)<<endl;
	}

	return 0;
}