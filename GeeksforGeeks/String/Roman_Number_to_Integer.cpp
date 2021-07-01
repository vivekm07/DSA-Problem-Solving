// { Driver Code Starts
// Initial template for C++

// Program to convert Roman Numerals to Numbers
#include <bits/stdc++.h>
using namespace std;

// Returns decimal value of roman numaral
int romanToDecimal(string &);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << romanToDecimal(s) << endl;
    }
}// } Driver Code Ends


// User fuunction teemplate for C++

// str given roman number string
// Returns decimal value of roman numaral
int romanToDecimal(string &str) {
    // code here
        map <char,int> rmap;
	    rmap['I'] = 1;
	    rmap['V'] = 5;
	    rmap['X'] = 10;
	    rmap['L'] = 50;
	    rmap['C'] = 100;
	    rmap['D'] = 500;
	    rmap['M'] = 1000;
	    int res=0;
	    if(str.length()==1)
	    {
	        return rmap[str[0]];
	    }
	    else
	    {
	        for(int i=0;i<str.length();i++)
	        {
	            if(rmap[str[i]]<rmap[str[i+1]])
	            {
	                res+=rmap[str[i+1]]-rmap[str[i]];
	                i+=1;
	            }
	            else
	            {
	                res+=rmap[str[i]];
	            }
	            
	        }
	    }
	    return res;
}