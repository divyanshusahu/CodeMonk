#include <bits/stdc++.h>
using namespace std;

void fastscan(int &number) 
{ 
    bool negative = false; 
    register int c; 
    number = 0; 
  
    c = getchar(); 
    if (c=='-') 
    { 
        negative = true; 
        c = getchar(); 
    } 

    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 

    if (negative) 
        number *= -1; 
} 

bool isPrime(int n)
{
	if (n==1)
		return false;
	for (int i=2;i*i<=n;i++)
	{
		if (n%i==0)
			return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int q;
	//cin>>q;
	fastscan(q);
	bool primes[1000001];
	primes[0] = false;
	for (int i=1;i<1000001;i++)
		primes[i] = isPrime(i);
	
	while(q--)
	{
		int l,r;
		//cin>>l>>r;
		fastscan(l);
		fastscan(r);
		int a,b;
		a = min(l,r);
		b = max(l,r);
		int count = 0;
		for (int i=a;i<=b;i++)
		{
			if (primes[i])
				count++;
		}
		//cout<<count<<"\n";
		printf("%d\n",count);
	}
}