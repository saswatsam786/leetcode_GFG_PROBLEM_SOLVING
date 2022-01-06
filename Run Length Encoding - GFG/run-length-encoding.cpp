// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string s)
{     
    string str = "";
    str+=s[0];
    int count = 1;
    
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1])
            count++;
        else{
            str=str+to_string(count);
            count=1;
            str+=s[i];
        }
        
    }
    str+=to_string(count);
    
    return str;
  //Your code here 
}     
 
