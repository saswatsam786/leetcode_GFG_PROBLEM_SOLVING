class Solution {
public:
    int trap(vector<int>& a) {
        stack<int> st;
        int n = a.size();
        int ans = 0;
        
        for(int i=0;i<n;i++){
            while(!st.empty() and a[st.top()]<a[i]){
                int cur = st.top();
                st.pop();
                if(st.empty())
                    break;
                
                int dif = i-st.top()-1;
                ans+=(min(a[st.top()],a[i])-a[cur])*dif;
            }
            st.push(i);
        }
        
        return ans;
    }
};