#include<iostream>
using namespace std;

bool palindromNumber(string str, int i, int j){
    // base case
    if(i>j) return true;

    if(str[i] != str[j]){
        return false;
    }else{
        return palindromNumber(str, i+1,j-1);
    }
}

int main(){
    string str = "abba";

    if(palindromNumber(str,0, str.length()-1)){
        cout<<"This is a Palindrum"<<endl;
    }else{
        cout<<"This is not palindrom"<<endl;
    }
    return 0;
}