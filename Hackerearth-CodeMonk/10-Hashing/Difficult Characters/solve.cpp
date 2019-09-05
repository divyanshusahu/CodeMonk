#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;

		map<char, int> lookUp;
		string allChars = "zyxwvutsrqponmlkjihgfedcba";

		for (int i=0; i<s.size(); i++)
		{
			if (lookUp.count(s[i]))
				lookUp[s[i]]++;
			else
				lookUp[s[i]] = 1;
		}

		for (int i=0; i<allChars.size(); i++)
		{
			if (!lookUp.count(allChars[i]))
				cout<<allChars[i]<<" ";
		}

		vector<int> freq;

		map<char, int>::iterator it = lookUp.begin();
		while (it != lookUp.end())
		{
			freq.push_back(it->second);
			it++;
		}

		sort(freq.begin(), freq.end());

		auto vec_it = freq.begin();

		while(vec_it != freq.end())
		{
			int cur_freq = *vec_it;
			vector<char> v;
			it = lookUp.begin();
			while(it != lookUp.end())
			{
				if (it->second == cur_freq)
					v.push_back(it->first);
				it++;
			}

			sort(v.rbegin(), v.rend());

			for (auto z = v.begin(); z!=v.end(); ++z)
				cout<<*z<<" ";

			vec_it += v.size();
		}
		cout<<endl;
	}

	return 0;
}