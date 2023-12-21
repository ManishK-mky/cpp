// Give the character that occurs maximum time in the string.

// Input ->  str = "abcdasaea";
// Output -> 4 (becz. 'a' appears 4 time sthe given string)

#include<iostream>
#include<string>

using namespace std;

int main(){

    string str = "my name is maaaaaammanish";

    int frequency[26] = {0};

    for(auto i=0u;str[i] != '\0';i++){  //    (str[i]!= '\0')  ya (i < str.size())
        if(str[i]>='a' && str[i]<='z'){
            frequency[str[i] - 'a'] ++;
        }
         // dekho small 'a' 97 se start hota hai. agar "a" appear hua hai tab (97-97) matlab frequency [0] =1 ,similary agar 'd' aya hai toh ['d' - 'a' = 3] , matlab frequency[3] = 1;
    }

    int max = 0;
    char character = 'a';

    for(int i=0;i<26;i++){
        if(frequency[i] > max){
            max = frequency[i];
            character = i +'a'; // [0 +'a' = a (kyuki charcter m store kar rhe hai)]
        }                       // [1 +'a' = b] , [2 +'a' = c]    
    }
    
    cout<<"The character that is occuring maximum time is:"<<endl;
    cout<<max<<"\t"<<character<<endl;
    return 0;
}