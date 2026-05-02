#include <iostream>

using namespace std;

bool searchKey(int *arr, int size, int k){
    if(size == 0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }else{
        return searchKey(arr+1, size-1, k);
    }

    
}

int main(){
    int size = 5;
    int arr[5] = {1,3,4,5,6};
    int k = 4;

    bool ans = searchKey(arr, size, k);

    cout <<"Search Key= "<< !!ans ? "Found" : "Not Found";

    return 0;
}