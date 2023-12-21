#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

// Taking a single word
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;
    cout<<str<<endl<<"---------------------"<<endl;

// Taking a sentences
    string sent;
    cin.ignore();
    cout<<"Enter a sentence"<<endl;
    getline(cin , sent);
    cout<<sent<<endl;

//Append
    cout<<"--------------------------"<<endl;
    string str1 = "Man";
    string str2 = "ish";

    cout<< str1 + str2<<endl;
    //Concatenation
    str1.append(str2);
    cout<<str1<<endl;

//
    string st = "manish";

    cout<<st[0] - 'a'<<endl; // number = character -+ character

    char ch= st[0] - 10;  
    cout<<ch<<endl;             // character = character - or + number 


// [push_back() ,] in string 

    string name = "MAnsi";
    name.push_back('h');
    cout<<name<<endl; 

    string name1 = "Kumarrrr";
    name1.pop_back();
    cout<<name1<<endl;
    return 0;
}
