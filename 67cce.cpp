#include<iostream>
#include<climits>

using namespace std;

int main(){

    string ch1 = "abcd";
    string ch2 = "xyz";

    int mini = INT_MAX;
    int sum = 0;
    for(auto i=0u;i<ch1.length();i++){
        for(auto j=0u;j<ch2.length();j++){
            char cha1 = ch1[i];
            char cha2 = ch2[j];

            int m = cha2 - cha1;
            cout<<m<<" ";
            mini = min(mini , m);
        }
        cout<<mini;
        sum += mini;
        cout<<endl;
    }
    cout<<sum<<endl;
    char chr = sum;
    cout<<chr;
    return 0;
}