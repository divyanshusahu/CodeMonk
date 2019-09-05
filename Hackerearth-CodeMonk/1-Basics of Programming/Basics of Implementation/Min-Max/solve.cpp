#include <iostream>
using namespace std;

void check(int a[],int n,int x[]);
int minimum(int a[],int n);
int maximum(int a[],int n);
int main() {
  // your code goes here
  int n;
  cin>>n;
  string ans="YES";
  int a[n];
  for (int i=0;i<n;i++)
  cin>>a[i];
  int x[101];
  check(a,n,x);
//	for (int i=0;i<101;i++)
//	cout<<x[i]<<" ";
  int min=minimum(a,n);
  int max=maximum(a,n);
  for (int i=min;i<=max;i++)
  {
      if (x[i]==0)
      {
          ans="NO";
          break;
      }
  }
  cout<<ans;

  return 0;
}
void check(int a[],int n,int x[])
{
    int c[101];
    for (int i=0;i<101;i++)
    c[i]=0;
    for (int i=0;i<n;i++)
    c[a[i]]++;
    for (int i=0;i<101;i++)
    x[i]=c[i];
}
int minimum(int a[],int n)
{
    int min=a[0];
    for (int i=1;i<n;i++)
    {
        if (a[i]<min)
        min=a[i];
    }
    return min;
}
int maximum(int a[],int n)
{
    int max=a[0];
    for (int i=1;i<n;i++)
    {
        if (a[i]>max)
        max=a[i];
    }
    return max;
}
