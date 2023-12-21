#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string str = "A man, a plan, a canal: Panama";

    string ans;

    for(auto i =0u;i<str.size();i++){
        if((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z')){
            ans.push_back(str[i]);
        }
    }
    cout<<ans<<endl;

    for(auto i=0u ; i<ans.size() ;i++){
        ans[i] = tolower(ans[i]);
    }

    int left = 0;
    int right = ans.size()-1;
    int flag = 0;

    while(left < right){
        if(ans[left] != ans[right]){
            flag = 1;
            break;
        }else{
            left++;
            right--;
        }
    }

    if(flag == 1){
        cout<<"Not a PAlindrome"<<endl;
    }else{
        cout<<"A Palindrome"<<endl;
    }

    cout<<ans<<endl<<ans.size();
    return 0;
}