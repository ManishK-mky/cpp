#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int solve(int a , int b , int c , int d){

    vector<int> v{a,b,c,d};

    unordered_map<int , int> ans;

    for(int ele : v){ //map the elements
        ans[ele]++;
    }

    int distinct_sum = 0;
    int duplicate_sum = 0;

    for(auto e : ans){
        if(e.second == 1){
            distinct_sum += e.first;
        }else{
            duplicate_sum += e.first;
        }
    }

    return distinct_sum - duplicate_sum;
}

int main(){

    int a , b, c,d;
    cin>>a>>b>>c>>d;

    cout<<solve(a,b,c,d);

    return 0;
}