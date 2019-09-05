#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<pair <int, int>> xy;

	for (int i=0;i<n;i++)
	{
		int x, y;
		cin>>x>>y;
		xy.push_back(make_pair(x, y));
	}

	map< pair<int, int>, int> freq;

	for (int i=0;i<n;i++)
	{
		if (freq.count(xy[i]))
			freq[xy[i]]++;
		else
			freq[xy[i]] = 1;
	}

	sort(xy.begin(), xy.end());

	int it = 0;
	while(it<n)
	{
		cout<<xy[it].first<<" "<<xy[it].second<<" "<<freq[xy[it]]<<endl;
		it += freq[xy[it]];
	}
}