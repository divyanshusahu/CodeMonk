#include <bits/stdc++.h>
using namespace std;

int coverPoints(vector<int> &A, vector<int> &B)
{
    int min_distance = 0;
    for (int i = 0; i < A.size() - 1; i++)
    {
        int xi = A[i];
        int xf = A[i + 1];
        int yi = B[i];
        int yf = B[i + 1];
        int dx = abs(xf - xi);
        int dy = abs(yf - yi);
        min_distance += min(dx, dy) + abs(dx - dy);
    }
    return min_distance;
}