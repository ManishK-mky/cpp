#include<iostream>

using namespace std;
int main() {

    int  p , q , r;
    p = 5 , q = 8 , r = 5;

    if((9&p)<r || q>r){
        q = 5&q;
    }

    q = 11+p;
    if((q+p)>(p-q)){
        r = (p+p) + q;
    }

    p = (p+r)+q;

    cout<<p+q+r;

    return 0;

}