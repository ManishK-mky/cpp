#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main(){

    string str = "My name is Manish Kumar";

    istringstream ss(str);
    vector<string> words;

    string word;
    while(ss >> word){
        words.push_back(word);
    }

    for(string s : words){
        cout<<s<<endl;
    }

    cout<<words.size();
    return 0;
}