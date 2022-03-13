#include <bits/stdc++.h>

using namespace std;

int sumOfNumber(int num1, int num2) {
  return num1 + num2;
}

void traverseArray(int array[], int size, int sum){
  int flag=0;
  for ( int i = 0; i < size ; i++){
    for (int j = i; j < size; j++){
      if (sumOfNumber(array[i], array[j+1]) == sum){
        flag = 1;
        cout<<"Following pair of number has the sum : "<<array[i]<<" "<< array[j+1]<<" "<<sumOfNumber(array[i], array[j+1])<<endl;
      }
    }
  }
  if( flag == 0) {
    cout<<"No pair has the matching sum";
  }
}

int main() {
  int n, sum=0;
  cout<<"Enter size of array : ";
  cin >> n;
  int array[n];
  cout<<"Enter the Elements of array : "<<endl;
  for (int i = 0; i < n; i++){
    cin>>array[i];
  }
  cout<<"Enter the sum of the pair to be matched : ";
  cin>>sum;
  traverseArray(array, n, sum);
  return 0;
}