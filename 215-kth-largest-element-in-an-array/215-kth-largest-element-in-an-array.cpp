class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]+=1;
        }
         int n = nums.size()-k;
        int count=0;
        int res=0;
        for(auto it=hash.begin();it!=hash.end();it++){
            count+=it->second;
            
            if(count>=n+1){
                res = it->first;
                break;
            }
        }
        
        return res;
    }
};