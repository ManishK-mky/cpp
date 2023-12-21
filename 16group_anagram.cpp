#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    unordered_map<string, vector<string>> anagram;

    for (string word : strs) {
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());
        anagram[sortedWord].push_back(word);
    }

    vector<vector<string>> result;
    for (auto & key : anagram) {
        result.push_back(key.second);
    }

    for (const vector<string>& innerVector : result) {
        for (const string& str : innerVector) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}
