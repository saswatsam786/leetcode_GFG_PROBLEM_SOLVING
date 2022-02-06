class Solution {
public:
    void nextPermutation(vector<int>& arr) {
     
        int n = arr.size();
        int gidx=0;
        for(int i=n-1;i>=1;i--){
            if(arr[i-1]<arr[i]){
                gidx=i;
                break;
            }
        }
        cout<<gidx;
        if(gidx==0){
            sort(arr.begin(),arr.end());
            return;
        }
    bool con =false;
        int index = gidx;
        for(int i=gidx;i<n;i++){
            if(arr[gidx-1]<arr[i] and arr[i]<arr[index]){
                index = i;
            }
        }
        
        swap(arr[gidx-1],arr[index]);
        
        sort(arr.begin()+gidx,arr.end());
        
        return;
        
        
        
        
    }
};