class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi = max(nums[i],maxi);
        }
    
    vector<int> n(maxi+2,0);
        
        
        for(int i=0;i<nums.size();i++){
            n[nums[i]]++;
        }
        
      int res = -1;
        for(int i=0;i<maxi+2;i++){
            if(n[i]>1){
                res = i;
            }
        }
        
        return res;
        
    }
};