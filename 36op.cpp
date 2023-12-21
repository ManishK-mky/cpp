#include<iostream>

using namespace std;

int main(){

    int i , j;
    i = 13 , j = 13;

    i ^= j;
    j ^= i;
    i ^= j;
    
    cout << i<<endl;
    cout<< j <<endl;
    return 0;
}