#include<iostream>
using namespace std;


bool isSortedArr(int arr[], int size){

    // base case
    if(size == 0 || size ==1){
        return true;
    }

    // Recusive relation
    if (arr[0] > arr[1]){
        return false;
    }else{
        return isSortedArr(arr+1, size-1);
    }

}


int main(){

    int size = 5;
    int arr[size] = {1,2,3,4,5};
    // int arr[size] = {2,34, 12, 34, 31};

    cout << "Is Array sorted::"<< isSortedArr(arr, size);

    return 0;
}