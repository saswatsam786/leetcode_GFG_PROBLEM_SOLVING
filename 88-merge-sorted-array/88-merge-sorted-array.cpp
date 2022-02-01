class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(m==0){
            int k=0;
            for(int i=0;i<n;i++){
                nums1[k++]=nums2[i];
            }
            return;
        }
        
        if(n==0){
            return;
        }
        
        int mid= ceil(floor((m+n)/2));
        
        while(mid >0){
            int i=0;
            int j=mid;
            
            while(j<(n+m)){
                if(j<m and nums1[i]>nums1[j])
                    swap(nums1[i],nums1[j]);
                else if(i<m and j>=m and nums1[i]>nums2[j-m])
                    swap(nums1[i],nums2[j-m]);
                else if(i>=m and j>=m and nums2[i-m]>nums2[j-m])
                    swap(nums2[i-m],nums2[j-m]);
                
                j++;
                i++;
            }
            
            if(mid==1){
                break;
            }else{
                mid = ceil((float)mid/2);
            }
        }
        int k=m;
        for(int i=0;i<n;i++){
            nums1[k++]=nums2[i];
        }
        return;
    }
};