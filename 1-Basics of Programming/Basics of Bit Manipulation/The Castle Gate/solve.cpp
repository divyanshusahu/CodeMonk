#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int count=0;
        for (int i=1;i<=n;i++)
        {
            for (int j=i+1;j<=n;j++)
            {
                int x = i^j;
                if (x <= n)
                {
                    count++;
                   // cout<<i<<" "<<j<<endl;
                }
                //cout<<(i^j)<<endl;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
