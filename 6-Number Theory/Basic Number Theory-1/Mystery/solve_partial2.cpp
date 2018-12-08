#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	for (int i=2;i*i<=n;i++)
	{
		if (n%i==0)
			return false;
	}
	return true;
}

int divisors(int n)
{
	if (n==1)
		return 1;
	if (isPrime(n))
		return 2;

	int result = 1;
	int count = 0;

	while(n>1)
	{
		for (int i=2;i<=n;)
		{
			if (n%i==0)
			{
				count++;
				n = n/i;
			}
			else
			{	
				result *= (count+1);
				count = 0;
				i++;
			}
		}
	}

	return result;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<divisors(n)<<endl;
	}

	return 0;
}