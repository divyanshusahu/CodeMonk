#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	int a[n];
	for (int i=0; i<n; i++)
		cin>>a[i];

	map<int, int> freq;

	for (int i=0; i<n; i++)
	{
		if (freq.count(a[i]))
			freq[a[i]]++;
		else
			freq[a[i]] = 1;
	}

	map<int, int>::iterator it = freq.begin();
	string result = "NO";

	while(it != freq.end())
	{
		int cur = it->first;
		int req = k - cur;

		if (cur == req)
		{
			if (freq[req] >= 2)
			{
				result = "YES";
				break;
			}
			else
				break;
		}

		if (freq.count(req))
		{
			result = "YES";
			break;
		}
		it++;
	}

	cout<<result;

	return 0;
}