// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int> v;
        if(n == 1){
            int i = 0;
            while(i<m)
                v.push_back(matrix[0][i++]);
        }
        else if(m == 1){
            int i = 0;
            while(i<n)
                v.push_back(matrix[i++][0]);
        }
        else{
            for(int j=0,i=0;j<m;j++){
                v.push_back(matrix[i][j]);
            }
            for(int j=m-1,i=1;i<n;i++){
                v.push_back(matrix[i][j]);
            }
            for(int j=m-2,i=n-1;j>=0;j--){
                v.push_back(matrix[i][j]);
            }
            for(int j=0,i=n-2;i>0;i--){
                v.push_back(matrix[i][j]);
            }
        }
        return v;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
