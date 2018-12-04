#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    cin>>a[i];
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int answer=a[l-1],count=0;
        if (a[l-1]==0)
        count++;
        for (int i=l;i<r;i++)
        {
            answer=answer^a[i];
            if (a[i]==0)
            count++;
        }
        cout<<answer<<" "<<count<<endl;
    }
}
