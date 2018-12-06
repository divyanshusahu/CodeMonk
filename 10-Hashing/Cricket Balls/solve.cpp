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
		int a[n];
		for (int i=0;i<n;i++)
			cin>>a[i];
		int k, count1, count2;
		cin>>k;
		count1 = 0;
		count2 = 0;

		map<int, int> ball_lookup;

		for (int i=0;i<n;i++)
		{
			if (ball_lookup.count(a[i]))
				ball_lookup[a[i]]++;
			else
				ball_lookup[a[i]] = 1;
		}

		map<int, int>::iterator it = ball_lookup.begin();
		while(it!= ball_lookup.end())
		{
			int cur = it->first;
			int req = k - cur;

			if (cur == req)
				count1 += (ball_lookup[cur]*(ball_lookup[cur]-1))/2;

			if (ball_lookup.count(req) && cur != req)
				count2 += ball_lookup[cur] * ball_lookup[req];

			//cout<<it->first<<" "<<it->second<<endl;
			it++;
		}

		cout<<(count1 + count2/2)<<endl;
	}
}