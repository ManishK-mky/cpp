// difference of sum

// difference = sum of numbers not divisible by 'n' - sum of numbers divisible by 'n' 

#include<iostream>

using namespace std;

int answer(int n,  int m){

    int sum1=0;
    int sum2=0;

    for(int i=1;i<=m;i++){
        if(i%n==0){
            sum1 = sum1 + i;
        }else{
            sum2 = sum2 + i;
        }
    }

    return sum2 - sum1;
}

int main(){

    int n , m;
    
    cin>>n;

    cout<<"enter the size of the array:"<<endl;
    cin>>m;

    cout<<answer(n,m);

    return 0;
}