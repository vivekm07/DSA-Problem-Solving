// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string currword="";
        vector<string> words;
        string res="";
        for(int i=0;i<S.length();i++){
            if(S[i]=='.'){
                words.push_back(currword);
                currword="";
            }
            else
                currword=currword+S[i];
        }
        words.push_back(currword);
        for(int i=words.size()-1;i>=0;i--){
            res=res+words[i];
            if(i!=0)
                res=res+'.';
        }
        return res;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends
