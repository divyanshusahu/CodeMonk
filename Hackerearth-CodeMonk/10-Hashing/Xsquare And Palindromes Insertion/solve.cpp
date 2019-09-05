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

		for (int i=0; i<s.size(); i++)
		{
			if (lookUp.count(s[i]))
				lookUp[s[i]]++;
			else
				lookUp[s[i]] = 1;
		}

		int count = 0;

		map<char, int>::iterator it = lookUp.begin();
		while (it != lookUp.end())
		{
			if ( (it->second % 2) == 1)
				count++;
			it++;
		}

		if (count == 0)
			cout<<"0\n";
		else
			cout<<(count-1)<<endl;
	}

	return 0;
}