class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        
        int j=0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                
                swap(arr[i],arr[j]);
                j++;
            }
        }
        
        return arr;
    }
};