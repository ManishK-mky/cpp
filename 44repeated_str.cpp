//hackerearth -- Repeated string

#include<iostream>

using namespace std;

int main(){

    string str;
    cin>>str;

    int n;
    cin>>n;

    if(str.length()==1 && str[0] == 'a'){
        cout<<n<<endl;
    }else
    if(str.length() == 1 && str[0] !='a'){
        cout<<"0"<<endl;
    }else{
        string ans="";
        int l = n/str.length();

        for(int i=0;i<l;i++){
            ans = ans+str;
        }

    //if we add "abc" three times then ---> abcabcabc  -- its length will be 9 and we have to obtain the string of "n" length therefore we are finding remining
        int remains = n-ans.length();

        for(int i=0;i<remains;i++){
            ans = ans+str[i];
        }
        cout<<ans<<endl;

        //counting the letter "a"
        int count=0;
        for(int i=0;i<ans.length();i++){
            if(ans[i] == 'a'){
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}