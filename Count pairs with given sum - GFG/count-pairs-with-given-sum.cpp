// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int sum) {
        // code here
        unordered_map<int,int> hash;
        int count=0;
        
        for(int i=0;i<n;i++){
           if(hash.find(sum-arr[i])!=hash.end()){
               
               count+=hash[sum-arr[i]];
           } 
           hash.insert({arr[i],0});
           hash[arr[i]]++;
        }
        
        return count;
        
    }
};

// { Driver Code Starts.

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
}  // } Driver Code Ends