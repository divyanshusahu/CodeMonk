#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sh, sm, eh, em;
        cin>>sh>>sm>>eh>>em;
        int th, tm;
        th = eh - sh;
        tm = em - sm;
        if (tm < 0)
        {
            th--;
            tm = 60 + tm;
        }
        cout<<th<<" "<<tm<<endl;
    }
    return 0;
}
