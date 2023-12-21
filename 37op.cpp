#include<iostream>

using namespace std;

int main(){

    int i , p , t , k;
    i = 20 , p = 10 , k = 1;
    t = i+2<<1;
    cout<<t<<endl;
    t = i+2<<1+k;
    cout<<t<<endl;
    t = i+2>>1;
    cout<<t<<endl;
    t = i+2>>1+k;
    cout<<t<<endl;
    return 0;
}