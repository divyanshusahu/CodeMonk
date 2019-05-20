#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m;
	scanf("%d", &m);
	int a[m];
	for (int i=0;i<m;i++)
		scanf("%d",&a[i]);
	sort(a,a+m);
	int min_dif = INT_MAX;
	for (int i=0;i<m-1;i++)
	{
		if (a[i+1] - a[i] < min_dif)
			min_dif = a[i+1] - a[i];
	}
	for (int i=2;i<=(min_dif/2);i++)
	{
		if (min_dif%i==0)
			printf("%d ",i);
	}
	printf("%d", min_dif);
}