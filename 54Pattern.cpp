#include<iostream>

using namespace std;

int main(){

    int m ;
    cin >> m;
    for(int i=m;i>0;i--){
        int n = m-i;
        for(int i=0;i<n;i++){
            cout<<" ";
        }

        for(int j = i;j>0;j--){
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}