#include<iostream>
using namespace std;

int totalSum(int n){
    int digit = n%10;
    int nextNum = n/10;

    // base case
    if(nextNum == 0){
        cout<<"sum:"<<digit<<endl;
        if(digit < 10){
            return digit;
        }else{
            cout<<"Reach="<<digit<<endl;
            totalSum(digit);
        }
    }
    cout<<"S::"<<digit<<endl;
    return digit + totalSum(nextNum);
}

int checkSingle(int n){
    int sum = totalSum(n);

    if(sum<10){
        return sum;
    }else{
        totalSum(sum);
    }
}

int countDigit(int n, int count){
    int divident = n/10;
    cout<<"divident "<< divident << endl;
    if(divident == 0){
        return count;
    }else{
        count++;
    }
    return countDigit(divident, count);
}

int main(){
    int n = 99999999454445;
    cout<<totalSum(n)<<endl;
    cout<<"check "<<checkSingle(n)<<endl;
    
    
    // cout<<"CountDigit= "<<countDigit(n, 0)<<endl;
    return 0;
}