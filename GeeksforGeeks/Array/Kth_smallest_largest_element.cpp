#include<bits/stdc++.h>
using namespace std;
void findKthMin(int A[], int size, int k){
    priority_queue<int> maxh;
    for(int i=0;i<size;i++){
        maxh.push(A[i]);
        if(maxh.size()>k){
            maxh.pop();
        }
    }
    cout<<maxh.top()<<endl;
}
void findKthMax(int A[], int size, int k){
    priority_queue<int, vector<int>, greater<int>> minh;
    for(int i=0;i<size;i++){
        minh.push(A[i]);
        if(minh.size()>k){
            minh.pop();
        }
    }
    cout<<minh.top()<<endl;
}
int main(){
    int A[]={3,6,2,8,7,4};
    int n= sizeof(A)/sizeof(A[0]);
    int k;
    cout<<"enter the value of k";
    cin>>k;
    cout<<"Kth smallest element of the given array\n";
    findKthMin(A,n,k);
    cout<<"Kth largest element of the given array\n";
    findKthMax(A,n,k);
}