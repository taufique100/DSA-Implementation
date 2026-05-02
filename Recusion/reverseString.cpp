#include<iostream>
using namespace std;

void reverseString(string& str, int i, int j){

    cout<<"Call Receive for"<< str<<endl;
    // base case
    if(i>j){
        return;
    }

    // logic
    swap(str[i], str[j]);
    i++;
    j--;

    // recursive relation
    reverseString(str, i, j);
}

int main(){
    string str = "abcde";

    cout<<"String before reverse:"<< str <<endl;
    reverseString(str,0, str.length()-1);
    cout<<"String after reverse:"<< str <<endl;
    return 0;
}