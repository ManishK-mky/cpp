#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    string name = "Manish";
    cout<< name.size()<<endl; // size() function  gives you number of characters
    
    string na = "My name is Manish Kumar"; //If we gives spaces then it will also count the spaces , space-4 and letter-19
    cout<<na.size()<<endl;
    
    //Indexing 
    string str = "Krishna";
    cout<<str[3]<<endl; //if we are using --- for indexing then like array in string also indexing starts from ,[0,1,2,3,4,...]
    cout<<endl<<"\n";

    //Printing --- using loop
    string str1 = "Radha Krishna";
    cout<<str1.size()<<endl;
    for(auto i=0u;i<str1.size();i++){
        cout<<str1[i]<<" ";
    }
    cout<<endl<<"\n";

    //Copying
    string str2 = "Sita Ram";
    string str3 = str2;
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<endl<<"\n";

    //copying using loop
    string s1 = "Radhe Radhe";
    string s2;  //matlab agar kisi dusre string me stroe karna hai tab uss dusre string ki size dena padega
    s2.resize(s1.size());
    for(auto i=0u ; i<s1.size() ;i++){
        s2[i] = s1[i];
    }
    cout<<s2<<endl;
    cout<<endl<<"\n";


    return 0;
}