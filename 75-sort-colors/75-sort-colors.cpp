class Solution {
public:
    void sortColors(vector<int>& arr) {
        int start=0,mid=0,end=arr.size()-1;
        
        while(mid<=end){
            if(arr[mid]==0){
                swap(arr[mid],arr[start]);
                start++;mid++;
            }else if(arr[mid]==1){
                mid++;
            }else{
                swap(arr[mid],arr[end]);
                end--;
            }
        }
        
        return;
    }
};