#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Row:";

    cin>> n;
    int cnt = 1;
   for(int i = 0; i<=n; i++){
    for(int j=0; j<=n; j++){
        if(i>j){
            cout<<" ";
        }else{
            cout<< cnt<<" ";
            cnt++;
        }
    }
    cnt = 1;
    cout<<endl;
   }


   return 0;
}