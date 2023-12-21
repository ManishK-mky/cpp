#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int>& arr ,int n){

    vector<int> ans(n , -1);

    stack<int> st;
    st.push(0);

    // int j=0;
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[st.top()] >= arr[i]){
            int top = st.top();
            ans[top] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;

}

int main(){

    int n,ele;
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>ele;
        arr.push_back(ele);
    }

    vector<int> result = solve(arr , n);

    for(int num : result){
        cout<<num<<" ";
    }
    return 0;
}