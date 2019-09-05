#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    while(n--)
    {
        int y;
        cin>>y;
        if (y>=s)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
