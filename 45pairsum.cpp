#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

int answer(vector<int>& arr , int targetSum){

    unordered_set<int> complementSet;

    int count = 0;

    for(int num : arr){
        int complement = targetSum - num;

        if(complementSet.find(complement) != complementSet.end()){
            count++;
        }

        complementSet.insert(num);
    }

    return count;
}

int main(){

    int n;
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++){
        int element;
        cin >> element;
        arr.push_back(element);
    }

    int targetSum;
    cin>>targetSum;

    int result = answer(arr,targetSum);

    cout<<result;

    return 0;
}