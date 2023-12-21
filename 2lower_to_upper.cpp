#include<iostream>
#include<string>
#include<algorithm> // for transform()

using namespace std;

int main(){

    string name = "manish KumAr";
    
    //Dekho capital 'A' ka ASCII number 65 hai and small 'a' ka ascii number 97 hai .
    // Iska mtlb agar hum small 'a' se 32 minus karde tab humko capital 'A' mil jayega.
    // Waise hi agar kisi bhi lowercase letter se 32 minus karenge tab woh UPPERCASE letter mil jayega.
     
    cout<<'a'-'A'<<endl;  //iska answer 32 hai -----> It means small 'a' , capital 'A' se 32 aage hai ---- ans since we wanto 
    // to convert lowercase into upper case therfore we should move all characters back to 32 characters.

    for(auto i=0u;i<name.size();i++){
       if(name[i] >= 'a' && name[i] <= 'z'){
            name[i] = name[i] - 32;
       }
    }
    cout<<name<<endl;

// --------------------------------------------------------------------------------------
    //converting from lower to upper using ---[toupper()]

    string str = "radhe radhe";
    for(auto i=0u;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = toupper(str[i]);
        }
    }
    cout<<str<<endl;
//----------------------------------------------------------------------------------------   

    //using [tranform()]
    string str1 = "12223 -> Hare Ram hare ram, ram ram haare hare , 9hare krishna hare krishna , 9krishna krishna hare hare ";
    transform(str1.begin(), str1.end(),str1.begin(),::toupper);
    cout<<str1<<endl;
    return 0;
}