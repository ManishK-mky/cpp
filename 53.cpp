#include<iostream>
#include<vector>

using namespace std;

int solve(string str){

    int n = str.length();

    int result = str[0];
    for(int i=1;i<n-1;i++){
        char binaryDigit = str[i+1];

        if(str[i] == 'A'){
            result = result & (binaryDigit - '0');i++;
            continue;
        }else
        if(str[i] == 'B'){
            result = result | (binaryDigit - '0');i++;
            continue;
        }else
        if(str[i] == 'C'){
            result = result ^ (binaryDigit - '0');i++;
            continue;
        }
    }
    return result;
}

int main(){

    string str = "1A0C0A0C0A1";

    cout<<solve(str);
    return 0;
}