#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

    string str = "aaabsbeebbr";

    unordered_map<char , int> ans;

    // for(char ch : str){   //--------------------------------1

    //     if(ans.find(ch) != ans.end()){
    //         ans[ch]++;
    //     }else{
    //         ans[ch] = 1;
    //     }
    // }

    // for obtaining this type of map = {{a,3},{b,4},{s,1},{b,2},{r,1}}

    for(char ch : str){  //---------------------------------2 
        ans[ch]++;
    }

    //1 aur 2 se ek hi kaam karega

    string answer = "";

    for(auto &ele : ans){
        answer = answer + to_string(ele.second) + ele.first;
    }

    cout<<answer;
    return 0;
}