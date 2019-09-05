#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n];
		for (int i=0;i<n;i++)
			cin>>array[i];

		map<int, int> lookUp;

		for (int i=0;i<n;i++)
		{
			if (lookUp.count(array[i]))
				lookUp[array[i]]++;
			else
				lookUp[array[i]] = 1;
		}

		int k;
		cin>>k;
		while(k--)
		{
			int x;
			cin>>x;
			if (lookUp.count(x))
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
	}

	return 0;
}