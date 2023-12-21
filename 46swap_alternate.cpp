#include<iostream>
#include<string.h>

using namespace std;

string answer(string & str){

    for(auto i=0u;i<str.length()-1;i++){
        if(str[i] == ' '){
            continue;
        }else{
            swap(str[i],str[i+1]);
            i++;
        }
    }

     return str;
}

int main(){

    string str = "Manish";
    // string ans = str;

    // for(auto i = 0u; i < str.length() - 1; i += 2){
    //     swap(str[i], str[i+1]);
    // } 

    //using function

    string ans = answer(str);
    cout << ans << endl; 
    cout << str << endl; 

    return 0;
}
