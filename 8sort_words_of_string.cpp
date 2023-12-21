#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str1 = "Hello world , Purana ho gya hai";
    string str2;
    str2.resize(str1.size());

    // Reverse the entire string
    reverse(str1.begin() , str1.end());
    str2 = str1;

    

    int start = 0;
    //[auto i=0u] is for unsigned int
    for(auto i=0u;i<str2.size();i++){
        if(str2[i] == ' ' || (i==str2.size()-1)){
            int end = (i==str2.size()-1)?i : i-1;
            reverse(str2.begin() + start , str2.begin() + end + 1 );
            start = i+1;
        }
    }

    cout << str2 << endl;
    return 0;
}
