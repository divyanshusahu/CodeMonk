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

int main()
{
    int n;
    cin>>n;
    int i = 1;
    int cur = 0;
    int flag = 1;
    while(cur<n)
    {
        cur += i;
        if (cur>=n)
            flag = 0;
        cur += i*2;
        i++;
    }
    if (flag == 0)
        cout<<"Patlu";
    else
        cout<<"Motu";

    return 0;
}
