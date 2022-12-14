#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int i,ptr=1;
        long long r;
        int flag =0;
        vector<int> a;
        r=arr[1];
        for(i=1;i<=n;i++)
        {
            if(i<n)
            {
            r=r+arr[i+1];
            }
            while(r>s && ptr<i)
            {
                
                r=r-arr[ptr];
                ptr++;
            }
            if(r==s)
            {
                a.push_back(ptr+1);
                a.push_back(i+1);
                return a;
            }
        }
        if(r!=s)
        {
            a.push_back(-1);
            return a;
        }
    }
     
};
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
