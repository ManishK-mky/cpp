#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string str1 = "Manish Kumar ";
    string str2 = "Manish Kumarrrr ";

    if(str1 == str2){
        cout<<"Strings same hai."<<endl;
    }else{
        cout<<"Strings same nhi hai."<<endl;
    }

//compare
    cout<<str1.compare(str2)<<endl; //agar equal hai tab 0(zero) nhi toh -1
    return 0;
}