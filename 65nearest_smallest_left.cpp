#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int>& arr,int n){

    vector<int> ans(n,-1);

    stack<int> st;
    st.push(n-1);

    for(int i=n-2;i>=0;i--){
        if(!st.empty() && arr[st.top()] >= arr[i]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main(){

    int n,element;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>element;
        arr[i] = element; 
    }

    vector<int> result = solve(arr , n);

    for(int i:result){
        cout<<i<<" ";
    }

    return 0;
}