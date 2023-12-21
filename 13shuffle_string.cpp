#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){

    string s = "codeleet"; 
    vector<int> indices = {4,5,6,7,0,2,1,3};

    string ans;

    unordered_map<int , char>map1;

    for(auto i=0u;i<s.size();i++){
        map1[indices[i]] = s[i];
    }

    for(auto i=0u;i<s.size();i++){
        ans.push_back(map1[i]);
    }

    cout<<ans;
    return 0;
}