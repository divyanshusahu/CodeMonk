#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<string> names;
	while(n--)
	{
		string s;
		cin>>s;
		names.push_back(s);
	}

	sort(names.begin(), names.end());

	map<string, int> freq;

	for (auto i = names.begin(); i != names.end(); ++i)
	{
		if (freq.count(*i) == 0)
			freq[*i] = 1;
		else
			freq[*i]++;
	}

	for (auto i = names.begin(); i != names.end(); i = i + freq[*i])
	{
		cout<<*i<<" "<<freq[*i]<<endl;
	}
}