#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>  // Add this line for accumulate

using namespace std;

bool isDivisible(int num, int arr[], int N) {
    for (int i = 0; i < N; i++) {
        if (num % arr[i] == 0) {
            return true;
        }
    }
    return false;
}

int DesiredArray(int Arr[], int N, int K) {
    // Create a vector to store the K smallest numbers
    vector<int> result;

    // Start from 2 because the array won't contain 1
    int num = 2;

    while (result.size() < K) {
        if (!isDivisible(num, Arr, N)) {
            result.push_back(num);
        }
        num++;
    }

    // Calculate and return the sum of the K smallest integers
    return accumulate(result.begin(), result.end(), 0);
}

int main() {
    int N;
    int K;

    cin >> N >> K;

    int *Arr = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }

    cout << DesiredArray(Arr, N, K);

    delete[] Arr; // Don't forget to free the allocated memory
    return 0;
}
