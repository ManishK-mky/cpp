#include<iostream>
#include<string.h>

using namespace std;

string solve(string str){

    int lower = 0;
    int upper = 0;

    for(int i=0;str[i]!='\0';i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            upper++;
        }else{
            lower++;
        }
    }

    if(lower == upper){
        return str;
    }

    if(lower>upper){
        for(int i=0;str[i]!='\0';i++){
            // str[i] = tolower(str[i]);
            if (str[i] >= 'A' && str[i] <= 'Z') {
                 str[i] = str[i] + 32;
            }
        }
    }else{
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - 32;
            }
        }
    }
    
    return str;
}

int main(){

    string str = "MAdam";

    cout<<solve(str);
    return 0;
}