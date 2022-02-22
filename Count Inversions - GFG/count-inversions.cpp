// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long int mergesort(long long arr[],long long temp[],int start,int mid,int end){
        int i=start,j=mid,k=start;
        long long int countin=0;
        
        while((i<=mid-1) and (j<=end)){
            if(arr[i]> arr[j]){
                temp[k++] = arr[j++];
                
                countin+=mid-i;
            }else{
                temp[k++]=arr[i++];
            }
        }
        
        while(i<=mid-1){
            temp[k++] = arr[i++];
        }
        
        while(j<=end){
            temp[k++]=arr[j++];
        }
        
        for(int i=start;i<=end;i++){
            arr[i] = temp[i];
        }
        
        return countin;
        
    }
    
    
    long long int merge(long long arr[],long long temp[],int start,int end){
        long long int countin = 0;
        if(start<end){
            int mid = (start+end)/2;
            
        countin+=merge(arr,temp,start,mid);
        countin+=merge(arr,temp,mid+1,end);
        
       countin+= mergesort(arr,temp,start,mid+1,end);
        }
        
        return countin;
    }
    
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
        long long temp[n];
    long long int countin = merge(arr,temp,0,n-1);
    
    return countin;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends