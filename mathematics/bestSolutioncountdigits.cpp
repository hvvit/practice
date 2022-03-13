#include <bits/stdc++.h>
#include <math.h>

// objective: find the number of digits in numn
using namespace std;

int main() {
  int num;
  cout<<"Enter the number : ";
  cin>>num;
  cout<<floor(log10(num)) + 1;
  return 0;
}

/*
so the best case solution is to take log to the base of 10, floor the value and add 1 to it...
*/