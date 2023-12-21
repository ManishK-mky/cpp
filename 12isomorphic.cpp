#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){

    string s = "badc";
    string t = "baba";

    int flag = 0;
    unordered_map<char , char> map1;
    unordered_map<char , char> map2;

    for(auto i=0u ; i<s.size();i++){
        if(map1.count(s[i])){
            if(map1[s[i]] != t[i]){
                flag = 1;
                break;
            }
        }
        else{
            map1[s[i]] = t[i];
        }
        if(map2.count(t[i])){
            if(map2[t[i]] != s[i]){
                flag = 1;
                break;
            }
        }
        else{
            map2[t[i]] = s[i];
        }
    }


    if(flag == 1 || (s.size() != t.size())){
        cout<<"Not an ISOMORPHIC"<<endl;
    }else{
        cout<<"AN ISOMORPHIC"<<endl;
    }

    return 0;
}