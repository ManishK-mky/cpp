#include<iostream>
#include<stack>
#include<unordered_map>

using namespace std;

bool isBalanced(string & str){

    stack<int> st;
    unordered_map<char , char> map1 = {{')', '('}, {']', '['}, {'}', '{'}};

    for(char ch:str){
        if(ch == '{' || ch == '[' || ch == '('){
            st.push(ch);
        }else{
            if(st.empty() || st.top() != map1[ch]){
                return 0;
            }
            st.pop();
        }
    }

    return st.empty();
}

int main(){

    string str = "{[()]}";

    if(isBalanced(str)){
        cout<<"It is balanced string";
    }else{
        cout<<"It is not balanced string";
    }

    return 0;
}