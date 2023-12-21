#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string str = "aabbbaa";

    // 1st method 
    // int left = 0;
    // int right = str.size()-1;
    // int flag = 0;

    // for(auto i=0u ;i<str.size();i++){ ///   It doesnot matter whether the letter is uppercase or lowercase both 'A' and 'a' will be treated equal:
    //     str[i] = tolower(str[i]);
    // }

    // while(left < right){
    //     if(str[left]!=str[right]){
    //         flag = 1;
    //         break;
    //     }else{
    //         left++;
    //         right--;
    //     }
    // }

    // if(flag==1){
    //     cout<<"Not a palindrome:";
    // }else{
    //     cout<<"A Palindrome:";
    // }


// 2nd method ---------------------------(It is not done for the case where UPPERCASE and LOWERCASE are treated same)
    string ans;
    ans.resize(str.size());

    for(auto i =0u;i<str.size();i++){
        str[i] = tolower(str[i]);
    }
    
    ans = str;
    cout<<ans<<endl;
    reverse(str.begin() , str.end());

    if(ans == str){
        cout<<"It is a Palindrome";
    }else{
        cout<<"It is NOT a Palindrome";
    }

    return 0;
}