#include <bits/stdc++.h>
// objective find the number of digits in a number
using namespace std;

int main() {
  int count=0,num;
  cout<<"Enter the number : ";
  cin>>num;
  while(num > 0){
    count++;
    cout<<num % 10<<endl;
    num = num /10;
  }
  cout<<"The count is : "<<count;
  return 0;
}

/*
so suppose num = 450
so on the first iteration num becomes 45 and we get the output as 0
on the second iteration num becomes 4 and we get the output as 5
on the third iteration num becomes 0 and we get the output as 4
*/