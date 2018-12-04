#include <bits/stdc++.h>
using namespace std;

int digitsum(int n)
{
    int sum = 0;
    while(n>0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int isPrime(int n)
{
    for (int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int a,b;
    cin>>a>>b;

    for (int i=a; i<=b; i++)
    {
        if (isPrime(i) && isPrime(digitsum(i)))
        cout<<i<<" ";
    }
    return 0;
}
