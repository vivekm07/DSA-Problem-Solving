// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long res=arr[0];
	    //int imax,imin;
	    for(long long i=1,imax=res,imin=res;i<n;i++){
            if(arr[i]<0){
                swap(imin,imax);
            }
            imax=max((long long)arr[i],imax*arr[i]);
            imin=min((long long)arr[i],imin*arr[i]);
            res=max(res,imax);
	    }
	    return res;
	}
	
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends