// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string s=arr[0];
        
        for(int i=1;i<N;i++){
            string s2=arr[i];
            string res="";
            int j=0,k=0;
            while(j<s2.length() and k<s.length()){
                if(s[k]==s2[j]){
                    res+=s[k];
                }
                else
                    break;
                j++;
                k++;
            }
            s=res;
        }
        if(s== "")
            return "-1";
        return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
