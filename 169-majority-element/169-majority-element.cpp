class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        
        int n = nums.size();
        int k = n/2;
        unordered_map<int,int> hash;
        
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        int num=INT_MIN;
        
        for(auto it:hash){
            if(it.second > k){
               num = it.first;         
            }
        }
        
        return num;
        
    }
};