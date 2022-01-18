// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
        string modify (string s)
        {
            int dict[256]={0};
            dict['a']=1;dict['A']=1;
            dict['e']=1;dict['E']=1;
            dict['i']=1;dict['I']=1;
            dict['o']=1;dict['O']=1;
            dict['u']=1;dict['U']=1;
            //code here.
            int i=0,j=s.size()-1;
            while(i<j){
                while(i<j and dict[s[i]]==0)i++;
                while(i<j and dict[s[j]]==0)j--;
                swap(s[i],s[j]);
                i++;j--;
            }
            
            return s;
        }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends