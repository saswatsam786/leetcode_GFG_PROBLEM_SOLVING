class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        
        int n = nums.size();
        int k=n/3;
        
        vector<int> res;
        
        unordered_map<int,int> hash;
        
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        
        for(auto it : hash){
            if(it.second >k){
                res.push_back(it.first);
            }
        }
        
        return res;
        
    }
};