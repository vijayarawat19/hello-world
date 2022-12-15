#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        int i,temp;
        long long r;
        r=0;
        long long t= pow(10,9)+7;
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            temp=(a[i]%t*i%t)%t;
            r=(r+temp) % t ;
        }
        return r;
    }
};
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
