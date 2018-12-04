#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];

    int bestSum = INT_MIN;
    for (int index=0; index<n; index++)
    {
        int curSum = a[index];
        int curIndex = index;
        for (int curTimes = 2; curIndex + curTimes <= n-1; curTimes++)
        {
            int x = curTimes;
            while(x--)
            {
                curIndex++;
                curSum += a[curIndex];
                //cout<<curIndex;
            }
        }
        if (curSum > bestSum)
            bestSum = curSum;
    }
    cout<<bestSum;
}
