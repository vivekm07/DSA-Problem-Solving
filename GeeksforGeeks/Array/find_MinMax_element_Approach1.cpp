#include<bits/stdc++.h>
using namespace std;
void findMin(int A[], int size){
    int mini;
    for(int i=0;i<size;i++){
        if(A[i]<A[i+1]){
            mini=min(mini,A[i]);
        }
    }
    cout<<mini<<endl;
}
void findMax(int A[], int size){
    int maxi=0;
    for(int i=0;i<size;i++){
        if(A[i]>A[i+1]){
            maxi=max(maxi,A[i]);
        }
    }
    cout<<maxi;
}
int main(){
    int A[]={3,6,2,8,7,4};
    int n= sizeof(A)/sizeof(A[0]);
    cout<<"Minimum element of the given array\n";
    findMin(A,n);
    cout<<"Maximum element of the given array\n";
    findMax(A,n);
}
