// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        // code here
        //int posno=0;
        int negno=0;
        int steps=0;
        int zeros=0;
        for(int i=0;i<N;i++){
            if(arr[i]==0)
                zeros++;
            else if(arr[i]>0)
                steps+=arr[i]-1;
            else{
                negno++;
                steps+=-1-arr[i];
            }
        }
        steps=steps+zeros;
        if(negno%2!=0&&zeros==0)
            steps+=2;
        return steps;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.makeProductOne(arr,N) << endl;
    }
    return 0;
}  // } Driver Code Ends
