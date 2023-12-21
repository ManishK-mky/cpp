#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

//sort the string lexicographically acc. to alphabets
    string str = "manishkumara";

    sort(str.begin() , str.end());
    cout<<str<<endl;

// Reversing the string
    string name = "Hello, World!";
    string n;
    n.resize(name.size());
    for(int i = name.size()-1;i>=0;i--){
        n += name[i];
    }
    cout<<n<<endl;

//reversing the words of thes string

    
    return 0;
}