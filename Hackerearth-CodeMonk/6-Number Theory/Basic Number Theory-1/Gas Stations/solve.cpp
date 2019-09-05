#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	cin>>n>>x;
	int count = 0;
	int temp = x;
	while(n--)
	{
		int p;
		cin>>p;
		temp = temp - p;
		if (temp > 0)
			count++;
		else
			break;
	}

	cout<<count;
}