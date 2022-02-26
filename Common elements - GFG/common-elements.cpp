// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            vector<int> ans;
            unordered_set<int> t1;
            unordered_set<int> t2;
            
            for(int i=0;i<n1;i++)
                t1.insert(a[i]);
                
            for(int i=0;i<n2;i++)
                if(t1.find(b[i])!=t1.end())
                    t2.insert(b[i]);
                    
            for(int i=0;i<n3;i++)
                if(t2.find(c[i])!=t2.end()){
                    ans.push_back(c[i]);
                    t2.erase(c[i]);
                }
                
                return ans;
            //code here.
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends