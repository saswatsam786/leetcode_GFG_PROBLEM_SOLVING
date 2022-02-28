class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n  = nums.size();
        
        int start=0,end=n-1;
        vector<int> res(n);
        int j = n-1;
        while(start<=end){
            if(pow(nums[start],2)>pow(nums[end],2)){
 
                res[j--]=pow(nums[start],2);
                start++;
            }else{
                res[j--]=pow(nums[end],2);
                end--;
            }
        }
        return res;
    }
};