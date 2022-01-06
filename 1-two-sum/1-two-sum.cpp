class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> result;
        unordered_map <int,int> hash;
        int n = nums.size();
   for(int i=0;i<n;i++){
       int num = target - nums[i];
       if(hash.find(num)!=hash.end()){
           result.push_back(hash[num]);
           result.push_back(i);
       }
       hash.insert({nums[i],i});
   }
        
        return result;
    }
};