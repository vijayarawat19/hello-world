//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int> count;
        int i,flag=0;
        for(i=0;i<n;i++)
        {
            count[a[i]]++;
            if(count[a[i]]==k)
          {
              flag=a[i];
	           //cout<<a[i]<<endl;
	           break;
        }
        }
        if(flag==0)
        {
            flag=-1;
        }
     return flag;   
    }
};
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}
