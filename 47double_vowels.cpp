#include<iostream>

using namespace std;

bool isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
        return 1;
    } 

    return 0;
}

string answer(string & str){

    string result = "";
    for(char ch : str){

        result = result + ch;

        if(isVowel(ch)){
            result = result + ch;
        }
    }

    return result;
}

int main(){

    string str = "Manish Kumar";

    string ans = answer(str);

    cout<<ans;
    return 0;
}