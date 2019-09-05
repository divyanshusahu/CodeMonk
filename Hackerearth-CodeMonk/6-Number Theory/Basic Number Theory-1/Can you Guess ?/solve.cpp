#include <bits/stdc++.h>
using namespace std;

long divisor_sum(int n)
{
	if (n==1)
		return 0;
	
	long sum = 1;
	for (int i=2;i<=n/2;i++)
	{
		if (n%i==0)
			sum += i;
	}

	return sum;
}

bool isPrime(int n)
{
	for (int i=2;i*i<=n;i++)
	{
		if (n%i==0)
			return false;
	}
	return true;
}

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		if (isPrime(n) && n!=1)
		{
			cout<<"1\n";
			continue;
		}

		cout<<divisor_sum(n)<<endl;
	}
}