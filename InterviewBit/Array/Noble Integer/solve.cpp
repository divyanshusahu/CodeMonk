#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A)
{
    sort(A.begin(), A.end());
    for (int i = 0; i < A.size() - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            continue;
        }
        int cur = A[i];
        if (cur == (A.size() - i - 1))
        {
            return 1;
        }
    }
    if (A[A.size() - 1] == 0)
    {
        return 1;
    }
    return -1;
}