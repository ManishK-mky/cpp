#include<iostream>

using namespace std;

int main(){

    int a , b, c;
    a = 6 , b = 5 , c = 4;
    if((a^9)<(9+a)){
        a = b+b;
    }else{
        if((a&b&c)>(c&a)){
            b = (1+3)^c;
        }
    }

    cout<<a+b+c;
    return 0;
}