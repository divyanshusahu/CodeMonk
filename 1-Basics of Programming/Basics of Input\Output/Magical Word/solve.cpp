#include <bits/stdc++.h>
using namespace std;

int prime(int n)
{
    for (int i=2;i*i<=n;i++)
    {
        if (n%i==0)
        return 0;
    }
    return 1;
}

int posInt(int x)
{
    if (x<0)
        return -x;
    return x;
}

int minDistance(vector<int> x, int y)
{
    int minDist = INT_MAX;
    int primeAscii;
    int dist;
    for (auto i = x.begin(); i != x.end(); ++i)
    {
        dist = posInt(*i - y);
        if (dist < minDist)
        {
            minDist = dist;
            primeAscii = *i;
        }
    }
    return primeAscii;
}

int main()
{
    int t;
    cin>>t;
    vector<int> lookUp;

    for (int x=65; x<=90; x++)
    {
        if (prime(x))
            lookUp.push_back(x);
    }
    for (int y=97; y<=122; y++)
    {
        if (prime(y))
            lookUp.push_back(y);
    }
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1="";
        for (int i=0;i<n;i++)
        {
            int x=(int)s[i];
            if ((prime(x)) && (x>=65 && x<=90) && (x>=97 && x<=122))
                s1 += s[i];
            else
            {
                int y = minDistance(lookUp, x);
                s1 += char(y);
            }
        }
        cout<<s1<<endl;
    }

    return 0;
}
