// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
    stack<char> st;
	bool flag = true;

	for(int i=0;i<s.length();i++){
		char ch = s[i];
		switch(ch){
			case '(':
			case '{':
			case '[':
					st.push(ch);
					break;
			case ')':
					if(!st.empty() && st.top() == '(')
						st.pop();
					else
						flag = false;
					break;
			case '}':
					if(!st.empty() && st.top() == '{')
						st.pop();
					else
						flag = false;
					break;
			case ']':
					if(!st.empty() && st.top() == '[')
						st.pop();
					else
						flag = false;
					break;
		}
		if(!flag)
			break;
	}
	return flag ? st.empty() : false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends