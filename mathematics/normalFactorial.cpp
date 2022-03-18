#include <bits/stdc++.h>

using namespace std;

int fatorial(int num) {
  if (num == 0 ) {
    return 0;
  }
  int fact = 1;
  for (int i = 1 ; i <= num; i++) {
    fact = fact * i;
  }
  return fact;
}

int main() {
  int num;
  cin>>num;
  cout<<fatorial(num)<<endl;
  return 0;
}