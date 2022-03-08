// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        if(n<=2)
            return 0;
            
        int maxL = arr[0],maxR = arr[n-1], left = 1, right = n-2;
        long long ans  = 0;
        
        while(left<=right){
            if(maxL<=maxR){
                if(arr[left]>=maxL){
                    maxL = arr[left];
                }else{
                    ans+=maxL - arr[left];
                }
                left++;
            }else{
                if(arr[right]>=maxR){
                    maxR = arr[right];
                }else{
                    ans+=maxR-arr[right];
                }
                right--;
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends