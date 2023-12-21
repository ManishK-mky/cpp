#include<iostream>
#include<string>
#include<unordered_map>
#include<stack>

using namespace std;

int main(){

    string s = "{";
    stack<char> stk;
    int flag = 0;

    unordered_map<char,char> map1 {
        {')' , '('},
        {'}' , '{'},
        {']' , '['}
        };

    for(char ch:s){
        if(ch == '(' || ch =='{' || ch == '['){
            stk.push(ch);
        }else{
            if(stk.empty() || stk.top() != map1[ch]){
                flag = 1;
                break;
            }
            stk.pop();
        }
    }

    if(flag == 1 || s.size()==1){
        cout<<"Not a Valid Parenthesis";
    }else{
        cout<<"It is a Valid Parenthesis";
    }
    
    return 0;
}