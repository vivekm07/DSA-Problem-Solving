// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
   void diagonal_sort1(vector<vector<int>>& matrix, int row, int col, int n, int m){
        vector<int> v;
        int r=row,c=col;
        if(col==row){
            return;
        }
        while(r<n and c<m){
            v.push_back(matrix[r][c]);
            r++;
            c++;
        }
        sort(v.begin(),v.end(),greater<int>());
        r=row;
        c=col;
        int idx=0;
        while(r<n and c<m and r!=c){
            matrix[r][c]=v[idx];
            r++;
            c++;
            idx++;
        }
    }
    void diagonal_sort2(vector<vector<int>>& matrix, int row, int col, int n, int m){
        vector<int> v;
        int r=row,c=col;
        if(col==row){
            return;
        }
        while(r<n and c<m){
            v.push_back(matrix[r][c]);
            r++;
            c++;
        }
        sort(v.begin(),v.end());
        r=row;
        c=col;
        int idx=0;
        while(r<n and c<m and r!=c){
            matrix[r][c]=v[idx];
            r++;
            c++;
            idx++;
        }
    }
    void diagonalSort(vector<vector<int> >& matrix, int n, int m) {
        // code here 
        for(int col=0;col<m;col++){
            diagonal_sort1(matrix,0,col,n,m);
        }
        for(int row=1;row<n;row++){
            diagonal_sort2(matrix,row,0,n,m);
        }
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;

        int inputline2[n*m];
        for (int i = 0; i < n*m; ++i)
            cin>> inputline2[i];
        vector<vector<int> > matrix( n , vector<int> (m, 0));

        for(int i=0; i<n; i++) {
            for (int j = 0; j < m; ++j) {
                matrix[i][j] = inputline2[i * m + j]; 
            }
        }
        
        Solution ob;
        ob.diagonalSort(matrix, n, m);

        // print the modified matrix
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) { 
                cout << matrix[i][j] << " "; 
            } 
            cout << endl; 
        }    
    }
    return 0;
}

  // } Driver Code Ends
