// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minFlips (string S)
{
    // your code here
    	    int cnt=0;
	    string s1="";
	    string s2="";
	    for(int i=0;i<S.length();i++)
	    {
	        if(i%2==0)
	        {
	            s1+="0";
	            s2+="1";
	        }
	        else
	        {
	            s1+="1";
	            s2+="0";
	        }
	    }
	    int cnt1=0;
	    int cnt2=0;
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]!=s1[i])
	            cnt1++;
	        if(S[i]!=s2[i])
	            cnt2++;
	    }
	    return min(cnt1,cnt2);
}
