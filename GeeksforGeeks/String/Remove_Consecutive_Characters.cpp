// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        int ans = 0;
        int i = 1;
        int len = S.length();
        while(i < len){
            while(i < len && S[ans] == S[i])
                i++;
            if(i < len){
                S[++ans] = S[i];
                i++;
            }
        }
        return S.substr(0,ans+1);
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends