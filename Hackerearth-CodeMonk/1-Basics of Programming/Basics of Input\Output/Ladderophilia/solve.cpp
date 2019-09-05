#include <bits/stdc++.h>
using namespace std;

void oneStepLadder()
{
    cout<<"*   *\n*   *\n*****\n*   *\n*   *\n";
}

void addSteps(int k)
{
    while(k--)
    {
        cout<<"*****\n*   *\n*   *\n";
    }
}

int main()
{
    int n;
    cin>>n;
    oneStepLadder();
    addSteps(n-1);
    return 0;
}
