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
	
	map<int, int> div;

	while(n>1)
	{
		for (int i=2;i<=n;)
		{
			if (n%i==0)
			{
				if (div.count(i))
					div[i]++;
				else
					div[i] = 1;
				n = n/i;
			}
			else
				i++;
		}
	}

	int result = 1;

	map<int, int>::iterator it = div.begin();
	while(it!=div.end())
	{
		result *= (it->second+1);
		it++;
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