#include <iostream>
using namespace std;

int main()
{
    char x[19];
    cin>>x;
    int k;
    cin>>k;
    for (int i=0;k>0;i++)
    {
        if (x[i]!='9')
        {
            x[i]='9';
            k--;
        }
    }
    cout<<x;
    return 0;
}
