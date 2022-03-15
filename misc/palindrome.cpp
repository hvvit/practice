#include <bits/stdc++.h>

using namespace std;

int palindrome(int num) {
  int rev=0, digit;
  while(num) {
    digit = num % 10;
    rev = rev * 10 + digit;
    num = num / 10;
  }
  return rev;
}

int main() {
  int num;
  cin>>num;
  int newNumber = palindrome(num);
  cout<<newNumber<<endl;
  if (num == newNumber) {
    cout<<"Yes"<<endl;
  } else {
    cout<<"No"<<endl;
  }
  return 0;
}