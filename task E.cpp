#include <iostream>
using namespace std;

int main(){
 int n;
 int arr[100];
 cin>>n;
 
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 
 int minValueIndex= 0;
 for(int i=1; i < n; i++)
 {
  if(arr[minValueIndex] > arr[i])
  {
   minValueIndex=i;
  }
 }
 
 int last = arr[minValueIndex];
 arr[minValueIndex]= arr[0];
 arr[0] = last;
 
 for(int i=0; i<n; i++)
 {
  cout<<arr[i]<<" ";
 }
 
 return 0;
  
}
