/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <bits/stdc++.h>
using namespace std;

int isWindow(int x)
{
    if (x%6 == 1 || x%6 == 0)
        return 1;
    return 0;
}

int isAsile(int x)
{
    if (x%6 == 3 || x%6 == 4)
        return 1;
    return 0;
}

int isMiddle(int x)
{
    if (x%6==2 || x%6 == 5)
        return 1;
    return 0;
}

int oppositeSeat(int x)
{
    int y = x%12;
    if (y == 0)
        return x-11;
    int z = x/12;
    int os = 12 - y + 1;
    return 12*z + os;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int opSeat = oppositeSeat(n);
        cout<<opSeat;
        if (isWindow(n))
        {
            cout<<" WS\n";
            continue;
        }
        if (isMiddle(n))
        {
            cout<<" MS\n";
            continue;
        }
        if (isAsile(n))
        {
            cout<<" AS\n";
            continue;
        }
    }
}
