#include <bits/stdc++.h>
using namespace std;

int findVowles(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int sum = 0;
    sum += count(s.begin(), s.end(), 'a') + count(s.begin(), s.end(), 'e') + count(s.begin(), s.end(), 'i') + count(s.begin(), s.end(), 'o') + count(s.begin(), s.end(), 'u');

    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string sub;
        long count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            for (int len = 1; len <= s.length() - i; len++)
                {
                    sub = s.substr(i, len);
                    count += findVowles(sub);
                }
        }
        cout<<count<<endl;
    }
    return 0;
}
