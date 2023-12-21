#include<iostream>

using namespace std;

int main(){

    int pp , qq , rr;
    pp = 1 , qq = 2 , rr =7;
    rr = (rr+9)+qq;
    pp = pp ;
    qq = (pp+7)&rr;
    rr = 1+rr;
    cout<<pp+qq+rr; 
    return 0;
}