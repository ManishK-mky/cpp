#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string s = "anaqgram";
    string t = "nagaram";

//--------1st Method
    int answer[26] = {0};

    for(char ch : s){
        answer[ch - 'a'] = answer[ch - 'a']+1;
    }

    for(char ch : t){
        answer[ch - 'a'] = answer[ch - 'a']-1;
    }

    int flag = 0;

    for(int element :answer){
        if(element != 0){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        cout<<"Anagrams NOT .";
    }else{
        cout<<"It is anagram";
    }

// 2nd Method-----------------------
    sort(s.begin() , s.end());
    sort(t.begin(), t.end());

    if(s==t){
        cout<<"Yes , it is anagram";
    }else{
        cout<<"Not an anagram";
    }

    
    return 0;
}