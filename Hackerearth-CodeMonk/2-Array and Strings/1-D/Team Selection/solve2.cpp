#include <bits/stdc++.h>
using namespace std;

long find(map<int, int> s, int a)
{
    long c = 0;
    map<int, int>::iterator it = s.begin();
    while(it != s.end())
    {
        if (it->first > a)
            c += it->second;
        it++;
    }
    return c;
}

int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
        cin>>b[i];

    map<int, int> striker;
    for (int i=0;i<n;i++)
    {
        if (striker.count(b[i]) == 0)
            striker[b[i]] = 1;
        else
            striker[b[i]] = striker[b[i]] + 1;
    }

    long count;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[j]>a[i])
            {
                count += find(striker,a[j]);
            }
        }
    }
    cout<<count;
}
