#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	
	map<char, int> freq;
	for (int i=0;i<s.length();i++)
	{
		if (freq.count(s[i]))
			freq[s[i]]++;
		else
			freq[s[i]] = 1;
	}

	int max = 0;
	int max_char = 128;

	map<char, int>::iterator it = freq.begin();
	while(it!=freq.end())
	{
		if ( (it->second > max) && (int(it->first) < max_char) )
		{
			max = it->second;
			max_char = int(it->first);
		}
		it++;
	}
	cout<<char(max_char)<<" "<<max;

	return 0;
}