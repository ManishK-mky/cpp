#include<iostream>

using namespace std;

int main(){

    int x, y ,z;
    x = 24, y=39 , z= 45;
    z = x+y;
    y = z-y;
    z = z-y;
    cout<<x<<y<<z; 
    return 0;
}