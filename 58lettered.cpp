#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int solve(char arr[]) {
    int sum = 0;
    unordered_map<char, int> ans = {
        {'A', 1},
        {'B', 10},
        {'C', 100},
        {'D', 1000},
        {'E', 10000},
        {'F', 100000},
        {'G', 1000000}
    };

    for (int i = 0; arr[i] != '\0'; i++) {
        sum = sum + ans[arr[i]];
    }
    return sum;
}

int main() {
    char arr[10] = "DCCBAA";
    cout << solve(arr) << endl;

    return 0;
}
