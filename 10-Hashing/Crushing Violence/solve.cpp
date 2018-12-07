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

		map<int, int> boys, girls;

		for (int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			boys[i] = x;
		}

		for (int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			girls[i] = x;
		}

		map< pair<int, int>, int> beating_boys_pair, beating_girls_pair;
		map<int, int> poor_boys, poor_girls;

		map<int, int>::iterator itb = boys.begin();
		while( itb != boys.end() )
		{
			if (girls[itb->second] != itb->first)
				{
					beating_boys_pair[make_pair(itb->first, girls[itb->second])] = 1;
					if (poor_boys.count(girls[itb->second]))
						poor_boys[girls[itb->second]]++;
					else
						poor_boys[girls[itb->second]] = 1;
				}
			itb++;
		}

		int count_each = 0;
		int poorb = 0;

		map< pair<int, int>, int>::iterator bbp = beating_boys_pair.begin();
		while (bbp!=beating_boys_pair.end())
		{
			int a = (bbp->first).first;
			int b = (bbp->first).second;

			if (beating_boys_pair.count(make_pair(b,a)))
				count_each++;
			bbp++;
		}

		map<int, int>::iterator pb = poor_boys.begin();
		while(pb!=poor_boys.end())
		{
			if (pb->second > poorb)
				poorb = pb->second;
			pb++;
		}

		//cout<<poorb<<" "<<count_each;

		map<int, int>::iterator itg = girls.begin();
		while(itg!=girls.end())
		{
			if (boys[itg->second] != itg->first)
			{
				beating_girls_pair[make_pair(itg->first, boys[itg->second])] = 1;
				if (poor_girls.count(boys[itg->second]))
					poor_girls[boys[itg->second]]++;
				else
					poor_girls[boys[itg->second]] = 1;
			}
			itg++;
		}

		int poorg = 0;

		map< pair<int, int>, int>::iterator bgp = beating_girls_pair.begin();
		while(bgp!=beating_girls_pair.end())
		{
			int a = (bgp->first).first;
			int b = (bgp->first).second;

			if (beating_girls_pair.count(make_pair(b,a)))
				count_each++;
			bgp++;
		}

		map<int, int>::iterator pg = poor_girls.begin();
		while(pg!=poor_girls.end())
		{
			if (pg->second > poorg)
				poorg = pg->second;
			pg++;
		}

		cout<<max(poorg, poorb)<<" "<<(count_each/2)<<endl;
	}

	return 0;
}