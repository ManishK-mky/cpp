#include<iostream>
#include<string>

using namespace std;

int main(){

    string sequence = "ababcabab";
    string word = "ab";
    int count = 0 ;
    int len=0 ;
    size_t pos=0;
    len = word.size();
    
    cout<<sequence.find(word);
        while(sequence.size() > word.size()){
            // len = word.size();
            // pos = sequence.find(word);
            sequence = sequence.substr(len);
            count++;
        }
    
    cout<<count;
    return 0;
}