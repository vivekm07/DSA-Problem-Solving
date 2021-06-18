// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
        int maxL[n],maxR[n];
        int res[n];
        int ans=0;
        maxL[0]=arr[0];
        maxR[n-1]=arr[n-1];
        for(int i=1;i<n-1;i++){
            maxL[i]=max(arr[i],maxL[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            maxR[i]=max(arr[i],maxR[i+1]);
        }
        for(int i=0;i<n-1;i++){
            res[i]=min(maxL[i],maxR[i]) - arr[i];
        }
        for(int i=0;i<n-1;i++){
            ans=ans+res[i];
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends