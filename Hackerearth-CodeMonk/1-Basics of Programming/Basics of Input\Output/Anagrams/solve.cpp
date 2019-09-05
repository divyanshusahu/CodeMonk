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

    int deletions = 0;
    map<char, int>::iterator it1 = map_s1.begin();
    while(it1 != map_s1.end())
    {
      //cout<<it1->first<<" : "<<it1->second<<endl;
      //it1++;
      if (map_s2.count(it1->first) == 0)
      {
        deletions += it1->second;
      }
      else if (map_s2.count(it1->first))
      {
        deletions += posInt(map_s1[it1->first] - map_s2[it1->first]);
      }
      it1++;
    }
    map<char, int>::iterator it2 = map_s2.begin();
    while(it2 != map_s2.end())
    {
      if (map_s1.count(it2->first) == 0)
      {
        deletions += it2->second;
      }
      it2++;
    }
    cout<<deletions<<endl;
  }
}
