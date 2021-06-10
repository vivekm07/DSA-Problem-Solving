#include<bits/stdc++.h>
using namespace std;
void revArr(int A[], int start, int end){
    while(start<end){
        int temp= A[start];
        A[start]= A[end];
        A[end]= temp;
        start++;
        end--;
    }
}
void printArr(int A[], int size){
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int A[]= {5,7,3,2,8,4};
    int n= sizeof(A)/sizeof(A[0]);
    cout<<"Original Array\n";
    printArr(A,n);
    revArr(A,0,n-1);
    cout<<"Reversed Array\n";
    printArr(A,n);
    return 0;
}