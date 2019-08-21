#include <bits/stdc++.h>
using namespace std;

vector<int> maxset(vector<int> &A)
{
    int arr_start, arr_end, cur_start, cur_end;
    vector<int> answer;
    vector<int> cur;
    long long int max_sum = 0;
    long long int cur_sum = 0;
    for (int i = 0; i < A.size(); i++)
    {
        //cout<<cur_sum<<endl;
        if (A[i] >= 0)
        {
            cur_sum += A[i];
            cur.push_back(A[i]);
        }
        else
        {
            if (max_sum < cur_sum)
            {
                answer = cur;
                max_sum = cur_sum;
            }
            if (max_sum == cur_sum && answer.size() < cur.size())
            {
                answer = cur;
            }
            cur.clear();
            cur_sum = 0;
        }
    }
    if (cur_sum > max_sum)
    {
        answer = cur;
    }
    if (cur_sum == max_sum && answer.size() < cur.size())
    {
        answer = cur;
    }
    return answer;
}
