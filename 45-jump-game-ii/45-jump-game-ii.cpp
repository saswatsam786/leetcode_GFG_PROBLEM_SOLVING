class Solution {
public:
    int jump(vector<int>& nums) {
        
        if(nums.size()==2 and nums[0]!=0){
            return 1;
        }
        
       int farthest = 0;
        int jumps=0;
        int current =0;
        int n = nums.size();
        
        for(int i=0;i<n-1;i++){
            farthest = max(farthest,i+nums[i]);
            
            if(i==current){
                jumps++;
                current = farthest;
            }
        }
        return jumps;
    }
};