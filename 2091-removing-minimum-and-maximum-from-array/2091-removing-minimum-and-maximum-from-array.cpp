class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
       int a,b;
        a = min_element(nums.begin(),nums.end())-nums.begin();
        b=max_element(nums.begin(),nums.end())-nums.begin();
        
        if(a > b )swap(a,b);
        int N = nums.size();
        return min({a+1+N-b,b+1,N-a});
        
    }
};
