#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n)
{
    int count;
    count =0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            count++;
        }
    }
    if(arr[n-1]>arr[0])
    {
        count++;
    }
    if(count==1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool res= isSorted(arr,n);
    cout<<res;
    return 1;
}
