#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int> total_time[2*1000000 + 1];

	for (int i=1; i<=n; i++)
	{
		int ti, di;
		cin>>ti>>di;
		total_time[ti+di].push_back(i);
	}

	for (int i=1; i<= 2*1000000; i++)
	{
		if (total_time[i].size())
		{
			for (int k = 0; k<total_time[i].size(); k++)
				cout<<total_time[i].at(k)<<" ";
		}
	}

	return 0;
}