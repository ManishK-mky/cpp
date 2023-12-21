#include<iostream>
#include<bits/stdc++.h>
#include<stack>

using namespace std;

vector<int> solve(vector<int>& arr , int n){

    // int n = arr.size(); 
    vector<int> ans(n , -1);
    stack<int> st;

    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[st.top()] <= arr[i]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    return ans;
}

int main(){

    int n;
    cin>>n;
    int element;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>element;
        arr.push_back(element);
    }

    vector<int> result = solve(arr,n);

    for(int i:result){
        cout<<i<<" ";
    }

    return 0;
}