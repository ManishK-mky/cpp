#include<iostream>
#include<unordered_map>

using namespace std;

int main(){

    string str = "aaabsbeebbr";

    unordered_map<char , int> ans;

    for(char ch : str){
        ans[ch]++;
    }

    string answer = "";

    for(char ch : str){
        if(ans[ch]!=0){
            answer = answer + to_string(ans[ch]) + ch;
            ans[ch] = 0;
        }
    }

    cout<<answer;
    return 0;
}