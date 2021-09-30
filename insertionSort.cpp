#include <bits/stdc++.h>
using namespace std;

// INSERTION SORT CODE
void insertionSort(int arr[], int n){
  for(int i = 1 ; i < n-1 ; i++){
    int current = arr[i];
    int prev = i-1;
    while(prev >= 0 && arr[prev] > current){
      arr[prev+1] = arr[prev];
      prev -= 1;
    }
    arr[prev+1] = current;
  }
  
}

int main() 
{
  int arr[] = {-12,-2,-5,5,7,-3,8,2,10};
  int n = sizeof(arr)/sizeof(int);
  cout<<"INSERTION SORT"<<endl;
  insertionSort(arr,n);
  for(auto x:arr){
    cout<<x<<",";
  }
  return 0;
}
