class Solution {
public:
    int subarraySum(vector<int>& n, int vag) {
        
        int sze = n.size();
        
        // int end=0;
        // int sum=0;
        
        int cum_sum=0;
        int cnt=0;
        
        unordered_map<int,int> hash;
        
        for(int i=0;i<sze;i++){
            
            cum_sum+=n[i];
            
            
            if(cum_sum==vag)
                cnt++;
            
            
            if(hash.find(cum_sum-vag)!=hash.end()){
                cnt+=hash[cum_sum - vag];
            }
            
            hash[cum_sum]++;
            
        }
        
        return cnt;
    
    }
};