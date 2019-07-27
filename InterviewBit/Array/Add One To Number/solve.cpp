#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> A) {
  unsigned int last = A.size() - 1;
  while(true) {
    if (last<0) {
      A.emplace(A.begin(),1);
      break;
    }
    A[last] = A[last] + 1;
    if (A[last] == 10) {
      A[last] = 0;
      last--;
    }
    else {
      break;
    }
  }
  while(true) {
    if (A[0] == 0) {
      A.erase(A.begin());
    }
    else {
      break;
    }
  }
  return A;
}

int main() {
  vector<int> v;
  v.assign(4,1);
  vector<int> answer = plusOne(v);
  for (auto iterator = v.begin(); iterator != v.end(); iterator++) {
    cout<<*iterator<<" ";
  }
  return 0;
}