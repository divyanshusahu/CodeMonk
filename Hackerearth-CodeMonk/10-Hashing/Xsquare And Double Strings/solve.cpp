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

		map<char, int> freq;

		for (int i=0;i<s.length();i++)
		{
			if (freq.count(s[i]))
				freq[s[i]]++;
			else
				freq[s[i]] = 1;
		}

		string result = "No";
		 map<char, int>::iterator it = freq.begin();
		 while(it!=freq.end())
		 {
		 	if (it->second >= 2)
		 	{
		 		result = "Yes";
		 		break;
		 	}
		 	it++;
		 }

		 cout<<result<<endl;
	}
}