class Solution {
public:
    string reverseVowels(string s) {
        
        int i=0,j=s.size()-1;
        
        while(i<j){
            if((s[i]=='a' or s[i]=='A' or s[i]=='e' or s[i]=='E' or s[i]=='i' or s[i]=='I' or s[i]=='o' or s[i]=='O' or s[i]=='u' or s[i]=='U') and (s[j]=='a' or s[j]=='A' or s[j]=='e' or s[j]=='E' or s[j]=='i' or s[j]=='I' or s[j]=='o' or s[j]=='O' or s[j]=='u' or s[j]=='U') ){
                swap(s[i++],s[j--]);
            }else if(s[i]=='a' or s[i]=='A' or s[i]=='e' or s[i]=='E' or s[i]=='i' or s[i]=='I' or s[i]=='o' or s[i]=='O' or s[i]=='u' or s[i]=='U'){
                j--;
            }else{
                i++;
            }
        }
        
        return s;
    }
};