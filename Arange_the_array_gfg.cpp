#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Rearrange(int arr[], int n);
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
      
        Rearrange( arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
void Rearrange(int arr[], int n)
{
int i;
vector<int> res2;
vector<int> res1;
for(i=0;i<n;i++)
{
  if(arr[i]<0){
   res1.push_back(arr[i]);}
   else
   {
       res2.push_back(arr[i]);
   }
}
for(i=0;i<res2.size();i++)
{
    res1.push_back(res2[i]);
}
for(i=0;i<n;i++)
{
    arr[i]=res1[i];
}
}
