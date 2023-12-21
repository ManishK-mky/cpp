#include<iostream>
#include<string>

using namespace std;

int main(){

    string s = "   fly me   to   the mooooon  ";
    int k;
    int count = 0;

    for(int i=s.size()-1;i>=0;i--){
        if(s[i] == ' '){
            continue;
        }else{
            k = i;
            break;
        }
    }

    for(int i=k ; i>=0 ;i--){
        if(s[i] == ' '){
            break;
        }else{
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}