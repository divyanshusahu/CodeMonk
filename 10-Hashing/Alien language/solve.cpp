#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string text, pattern;
		cin>>text>>pattern;

		map<char, int> map_text, map_pattern;

		for (int i=0; i<text.length(); i++)
		{
			if (map_text.count(text[i]))
				map_text[text[i]] += 1;
			else
				map_text[text[i]] = 1;
		}

		for (int i=0; i<pattern.length(); i++)
		{
			if (map_pattern.count(pattern[i]))
				map_pattern[pattern[i]] += 1;
			else
				map_pattern[pattern[i]] = 1;
		}

		map<char, int>::iterator it = map_pattern.begin();
		string result = "YES";
		
		while (it != map_pattern.end())
		{
			if (map_text.count(it->first) == 0)
			{
				result = "NO";
				break;
			}
			else
				break;
			it++;
		}

		cout<<result<<endl;

	}
}