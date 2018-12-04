#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  long a[n], b[n];
  for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
        cin>>b[i];
    long count = 0;
    for (int i=0;i<n;i++)
    {
      for (int j=i+1;j<n;j++)
      {
        if (a[j]>a[i])
        {
          for (int k=0;k<n;k++)
          {
            if (b[k] > a[j])
              count++;
          }
        }
      }
    }
    cout<<count;
}
