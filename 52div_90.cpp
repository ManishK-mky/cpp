#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int five = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 5) {
            five++;
        }
    }

    int f = five;
    // int pro = 5;1
    while (five) {
        int pro = 5;
        pro = pro * five;
        if (pro % 9 == 0) {
            break;
        }
        five--;
    }

    int zeroes = n - f;
    for(int i=0;i<five;i++){
        cout<<"5";
    }
    
    if(five == 0){
        cout<<"0";
    }else{
        for(int i=0;i<zeroes;i++){
        cout<<"0";
        }
    }
    return 0;
    
}
