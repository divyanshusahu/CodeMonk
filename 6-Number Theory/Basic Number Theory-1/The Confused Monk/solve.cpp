#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (b==0)
		return a;
	return gcd(b, a%b);
}

int gcd_of_n_numbers(int a[], int n)
{
	if (n==1)
		return a[0];
	int cur_gcd = gcd(a[0], a[1]);
	for (int i=2; i<n;i++)
	{
		cur_gcd = gcd(cur_gcd,a[i]);
		if (cur_gcd == 1)
			return 1;
	}
	return cur_gcd;
}

long int power(long int a, long int b, long int x)
{
	if (b==0)
		return 1;
	else if (b%2==0)
		return power((a*a)%x, b/2, x);
	else
		return (a*power((a*a)%x, (b-1)/2, x)%x);
}

int main()
{
	int n;
	//cin>>n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);

	long int result = 1;
	int arr_gcd = gcd_of_n_numbers(a, n);
	long int me = pow(10,9)+7;

	for (int i=0;i<n;i++)
	{
		long int temp = power(a[i], arr_gcd,me);
		result = (result * temp)%me;
	}

	//printf("%d\n", result);
	cout<<result;
	return 0;
}