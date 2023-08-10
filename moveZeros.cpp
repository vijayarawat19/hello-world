//move zeros to end of array without changing the relative position of non zero elements
#include<bits/stdc++.h>
using namespace std;
void moveArray(int arr[],int n)
{

    int i =0;
    int j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
        
    }
    while(j<n)
    {
        arr[j]=0;
        j++;
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
    moveArray(arr,n);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


