#include<iostream>
using namespace std;

void startPrint(int n){
    int row = 1;
    while(row <= n){
        // space print
        int space = n-row;

        while(space){
            cout<<" "<<" ";
            space--;
        }
        int col1 = 1;

        // II - Section
        while(col1 <= row){
            cout<<col1<<" ";
            col1++;
        }
        // III - section
        int col2 = row-1;
        while(col2){
            cout<<col2<<" ";
            col2--;
        }
        cout<<endl;
        row++;
    }
}

int main(){
    int n = 4;

    // int i = 1;
    // while(i<=n){
    //   int space = i-1;
    //   while(space > 0){
    //     cout<<" " <<" ";
    //     space--;
    //   }

    //   int col = n-i+1;
    //   while(col > 0){
    //     cout<<"*"<< ' ';
    //     col--;
    //   }
    //     cout<<endl;
    //     i++;
    // }


    startPrint(n);
   
    return 0;
}