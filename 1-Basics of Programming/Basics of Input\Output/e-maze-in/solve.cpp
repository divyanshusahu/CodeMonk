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
    string s;
    cin>>s;
    int x = 0;
    int y = 0;
    for (int i=0; i<s.size(); i++)
    {
        switch(s[i])
        {
            case 'L' :
                x -= 1;
                break;
            case 'R' :
                x += 1;
                break;
            case 'D' :
                y -= 1;
                break;
            case 'U' :
                y += 1;
                break;
        }
    }
    cout<<x<<" "<<y;
}
