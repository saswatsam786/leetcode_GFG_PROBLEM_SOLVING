class Solution {
public:
    int titleToNumber(string c) {
        
        int n = c.size();
        int ans = 0;
        cout<<n;
        
        for(int i=0;i<n;i++){
          int p = c[i]-64;
            ans=ans*26 +p;
        }
        
        return ans;
        
    }
};