#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<climits>

using namespace std;

int solve(vector<int>& a ,vector<int>& b ,int n,int m){

    sort(a.begin() , a.end());
    sort(b.begin() , b.end());

    int max;
    if(b[m-1] > a[0]){
        max = b[m-1] - a[0];
    }else{
        max = a[n-1] - b[0];
    }
    return max;
}

int main(){

    int n,m;
    cin>>n>>m;

    vector<int> a(n);
    vector<int> b(m);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    cout<<solve(a,b,n,m);
    return 0;
}