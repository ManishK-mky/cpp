#include<iostream>

using namespace std;

int main(){

    int a ,b, c;
    a = 1, b = 5 , c = 10;
    b = (c^c)^a;
    c = (b+b)&c;
    c = c+a;
    cout<< a+b+c;
    return 0;
}