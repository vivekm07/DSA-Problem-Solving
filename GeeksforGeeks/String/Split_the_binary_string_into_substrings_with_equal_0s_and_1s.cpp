#include<bits/stdc++.h>
using namespace std;

int equalSubStr(string str, int n){
    int cnt0=0;
    int cnt1=0;
    int cntStr=0;
    for(int i=0;i<n;i++){
        if(str[i]=='0')
            cnt0++;
        else
            cnt1++;
        if(cnt0==cnt1)
            cntStr++;
    }
    if(cntStr==0)
        return -1;
    return cntStr;
}
int main(){
    string str="0100110101";
    int n=str.length();
    cout<<equalSubStr(str,n);
    return 0;
}