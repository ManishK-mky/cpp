// Form the biggest number from the numeric string 

// EG- Input -> str = "2138";
//     output -> "8321"

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string num = "2138"; //sort the number in decreasing order

    sort(num.begin() , num.end() , greater<int>());
    cout<<num<<endl;

    //form the smallest number from the numeric string;
    string num1 = "9871232";
    sort(num1.begin() , num1.end() );
    cout<<num1<<endl;

    return 0;
}