#include <bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> result;
        int i,j,c=0,s;
        
        for(i=0;i<n;i++)
        {
            int b=k-arr[i];
            if(result[b])
            {
                c=c+result[b];
            }
            result[arr[i]]++;
        }
        return c;}
        
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
