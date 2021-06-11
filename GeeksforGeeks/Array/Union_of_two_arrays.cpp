#include <bits/stdc++.h>
using namespace std;

int doUnion(int *, int , int *, int);

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	   
	    cout << doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}// } Driver Code Ends


//User function template in C++

// a and b : given array with n and m size respectively

int doUnion(int a[], int n, int b[], int m)  {
    //code here
    int i=0,j=0;
    vector<int> v;
    while(i<m && j<n){
        if(a[i]<b[j]){
            v.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[j]){
            v.push_back(b[j]);
            j++;
        }
        else{
            v.push_back(b[j]);
            i++;
        }
    }
    while(i<m){
        v.push_back(a[i]);
        i++;1
    }
    while(j<n){
        v.push_back(a[j]);
        j++;
    }
    return v.size();
}