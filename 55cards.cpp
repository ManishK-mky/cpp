#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int solve(int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return 2;
    }

    vector<int>arr(100);
    arr[0] = 0;

    for(int i=1;i<=n;i++){
        arr[i] = 2*i + (i-1) + arr[i-1];
    }

    // int len = arr.size();
    return arr.last;
}

int main(){

    int n;
    cin>>n;

    cout<<solve(n);
    return 0;
}