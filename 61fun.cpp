// The function accepts an array 'arr' of 'n' positive integers as its argument. Let's suppose:

//  f(x) = Sum of digits of an integer
// You are required to calculate the value of the following:

// F1= [f(arr[0]) + f(arr[1]) + f(arr[2]) + ..........+ f(arr[n-1])] %10
// F2 = [(arr[0] + arr[1] + arr[2] + .........+ arr[n-1])] % 10
// F = F1 - F2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int solve1(int e){

    int sum = 0;
    
    while(e!=0){
        sum = sum + e%10;
        e = e/10;
    }
    
    return sum;
}


int solve2(vector<int>& arr){

    int sum1 = 0;
    int sum2 = 0;
    for(int e : arr){
        sum1 = sum1 + e;    
        sum2 = sum2 + solve1(e);  
    }
    return sum2%10-sum1%10;
}


int main(){

    int n,element;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>element;
        arr.push_back(element);
    }

    // int res1 = solve1(arr , n);
    int res = solve2(arr);
    cout<<res;
    return 0;
}