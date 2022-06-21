class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        
        
        int rstart=0,rend=m.size()-1,cstart=0,cend=m[0].size()-1;
        vector<int> res;
        
        while(rstart<=rend and cstart<=cend){
            for(int i=cstart;i<=cend;i++){
              res.push_back(m[rstart][i]);  
                cout<<rstart<<" "<<i<<'\n';
            }
            
            
           rstart++;
            
            for(int i=rstart;i<=rend;i++){
                res.push_back(m[i][cend]);
                cout<<i<<" p"<<cend<<'\n';
                
            }
            
            cend--;
            
            if(rstart<=rend){
            
            for(int i=cend;i>=cstart;i--){
                res.push_back(m[rend][i]);
                cout<<rend<<" q"<<i<<'\n';
            }
            
            rend--;
            }
            
            if(cstart<=cend){
            
            for(int i=rend;i>=rstart;i--){
                res.push_back(m[i][cstart]);
                cout<<i<<" z"<<cstart<<'\n';
            }
            
            cstart++;
            }
            
            // cout<<cstart<<cend;
            
        }
        
        return res;
        
    }
};