#include<iostream>
#include<string>
#include<algorithm>  //for transform()

using namespace std;

int main(){

//  In C plus plus ("") double quotes is used for string literals and
//  single quotes ('). Single quotes are used for character literals

    string name = "RADHE RADHE";

    for(auto i=0u;i<name.size();i++){
        if(name[i]>='A' && name[i]<='Z'){
            name[i] = name[i] + 32;
        }
    }
    cout<<"Name in lowercase:----> "<<name<<endl;

    //Using -- tolower() ---function--> this function is used to work on each characters not on the entire string a once
    string str = "SITA RAM";
    
    for(auto i=0u ;i<str.size();i++){
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = tolower(str[i]);
        }   
    }
    cout<<endl<<str;

    //using function directly
    string str1 = "RADHE KRISHNA";
    transform(str1.begin() , str1.end() , str1.begin() , ::tolower);
    cout<<endl<<str1<<endl; 

    return 0;
}