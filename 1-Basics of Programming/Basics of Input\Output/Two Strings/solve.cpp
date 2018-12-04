// find minimum number of deletion required to make two strings anagram

#include <bits/stdc++.h>
using namespace std;

int posInt(int x)
{
  if (x<0)
    return -x;
  return x;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s1, s2;
    cin>>s1>>s2;
    map<char, int> map_s1;
    map<char, int> map_s2;
    for (int i=0; i<s1.size(); i++)
      map_s1[s1[i]] = 0;
    for (int i=0; i<s1.size(); i++)
      map_s1[s1[i]] += 1;

    for (int i=0; i<s2.size(); i++)
      map_s2[s2[i]] = 0;
    for (int i=0; i<s2.size(); i++)
      map_s2[s2[i]] += 1;

    int flag = 0;
    map<char, int>::iterator it1 = map_s1.begin();
    while(it1 != map_s1.end())
    {
      if (map_s2.count(it1->first) == 0)
      {
        flag = 1;
        break;
      }
      else if (map_s1[it1->first] != map_s2[it1->first])
      {
        flag = 1;
        break;
      }
      it1++;
    }

    if (flag)
        cout<<"NO\n";
    else
        cout<<"YES\n";
  }
  return 0;
}
