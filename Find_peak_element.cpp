#include<iostream>
using namespace std;

int peak(int size,int arr[])
 {
  int s=0;
  int e=size-1;
  int mid= s+(e-s)/2;
  while(s<=e)
  {
      if(arr[mid]>arr[mid+1]){
          e=mid-1;
          
      }
      else if(arr[mid]<arr[mid+1])
      {
          s=mid+1;
      }
      mid= s+(e-s)/2;
  }
  return s;
 }
 
 int main()
 {
     int size,i,a;
     
     //int arr[5]={4,5,6,7,1};
     cout<<"ENter the size of array";
     cin>>size;
     int arr[size];
     
     for(i=0;i<size;i++)
     {
         cin>>a;
         arr[i]=a;
     }
     int p = peak(size,arr);
     cout<<p;
 }
