#include <bits/stdc++.h>
using namespace std;

void fastscan(int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;

    number = 0;

    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;

        // extract the next character from the buffer
        c = getchar();
    }

    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;

    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    fastscan(n);
    fastscan(q);
    int a[n];
    for (int i=0;i<n;i++)
        fastscan(a[i]);
    while(q--)
    {
        int i,j;
        fastscan(i);
        fastscan(j);
        long sum = 0;
        for (int x=i-1 ; x<j; x++)
        {
            sum += a[x];
        }

        float avg = float(sum)/(j-i+1);
        cout<<floor(avg)<<endl;
    }
}
