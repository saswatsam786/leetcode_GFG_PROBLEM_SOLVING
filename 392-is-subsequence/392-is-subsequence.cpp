class Solution {
public:
    
    bool check(string s,string t,int sl,int tl){
        if(sl==0)
            return true;
        if(tl==0)
            return false;
        
        if(s[sl-1]==t[tl-1])
            return check(s,t,sl-1,tl-1);
        
        return check(s,t,sl,tl-1);
    
    }
    
    bool isSubsequence(string s, string t) {
        
        return check(s,t,s.length(),t.length());
        
        
    }
};