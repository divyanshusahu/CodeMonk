#include <bits/stdc++.h>
using namespace std;

long int power(long int a, long int b, long int x)
{
	if (b==0)
		return 1;
	if (b%2==0)
		return power( (a*a)%x, b/2, x );
	return  (a*power( (a*a)%x, (b-1)/2, x ))%x;

}

int main()
{
	long int a, b, x;
	cin>>a>>b;
	x = pow(10,9) + 7;
	cout<<power(a,b,x);
}