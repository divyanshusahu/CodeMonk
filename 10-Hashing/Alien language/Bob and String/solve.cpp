#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{

	string s,t;
	cin>>s>>t;

	map<char, int> freq_s, freq_t;

	for (int i=0; i<s.size(); i++)
	{
		if (freq_s.count(s[i]))
			freq_s[s[i]]++;
		else
			freq_s[s[i]] = 1;
	}

	for (int i=0; i<t.size(); i++)
	{
		if (freq_t.count(t[i]))
			freq_t[t[i]]++;
		else
			freq_t[t[i]] = 1;
	}

	int operations = 0;

	map<char, int>::iterator it_t = freq_t.begin();
	while (it_t != freq_t.end())
	{
		if (freq_s.count(it_t->first))
			operations += abs(freq_s[it_t->first] - freq_t[it_t->first]);
		else
			operations += it_t->second;
		it_t++;
	}

	map<char, int>::iterator it_s = freq_s.begin();
	while(it_s != freq_s.end())
	{
		if (!freq_t.count(it_s->first))
			operations += it_s->second;
		it_s++;
	}

	cout<<operations<<endl;
	}
}