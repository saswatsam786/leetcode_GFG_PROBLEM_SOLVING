class Solution {
public:
    vector<int> getRow(int r) {
        
        vector<int> v;
        
        int n=r;
        long long int indi=1;
        v.push_back(indi);
        for(int i=0;i<r;i++){
          indi*=n-i;
            indi/=i+1;
            
            v.push_back(indi);
            
    }
        
        return v;
        }
};