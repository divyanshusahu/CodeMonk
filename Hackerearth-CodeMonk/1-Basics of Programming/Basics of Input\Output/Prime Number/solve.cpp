/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <bits/stdc++.h>
using namespace std;

int isPrime(int x)
{
    for (int i=2; i*i<=x; i++)
    {
        if (x%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;
    for (int i=2;i<=n;i++)
    {
        if (isPrime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
