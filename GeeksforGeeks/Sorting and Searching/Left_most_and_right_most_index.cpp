// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    long long leftMost(vector<long long> v, long long x){
        long long l=0,mid;
        long long r=v.size()-1;
        long long res=-1;
        while(l<=r){
            mid=(l+r)/2;
            if(v[mid]==x){
                res=mid;
                r=mid-1;
            }
            else if(v[mid]>x){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
    long long rightMost(vector<long long> v, long long x){
        long long l=0,mid;
        long long r=v.size()-1;
        long long res=-1;
        while(l<=r){
            mid=(l+r)/2;
            if(v[mid]==x){
                res=mid;
                l=mid+1;
            }
            else if(v[mid]>x){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        long long leftBound=leftMost(v,x);
        long long rightBound=rightMost(v,x);
        if(leftBound==-1 && rightBound==-1)
            return {-1,-1};
        else
            return {leftBound,rightBound};
    }
};

// { Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}
  // } Driver Code Ends
