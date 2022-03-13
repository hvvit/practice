#include <bits/stdc++.h>

using namespace std;

int sumOfNumber(int num1, int num2){
  return num1 + num2;
}

void traverseArray(int array[], int size, int sum){
  int mark1= 0, mark2= size -1, flag = 0;
  while(mark1 != mark2){
    int s = sumOfNumber(array[mark1], array[mark2]);
    if (s == sum ){
      flag = 1;
      break;
    } else if (s > sum){
      mark2--;
    } else {
      mark1++;
    }
  }
  if(flag == 0){
    cout<<"No"<<endl;
  } else { cout<<"yes and the numbers are "<<array[mark1]<<" "<<array[mark2] <<endl; }
}

int main(){
  int num,sum=0;
  cout<<"Enter array length : ";
  cin>>num;
  int array[num];
  cout<<"Enter Sum : ";
  cin>>sum;
  cout<<"Enter the values of array : "<<endl;
  for(int i=0; i < num; i++)
  cin>>array[i];
  traverseArray(array, num, sum);
  return 0;    
}