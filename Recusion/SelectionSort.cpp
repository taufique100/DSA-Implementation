#include<iostream>
#include<cstdint>
using namespace std;

void selectedSort(int *arr, int size){
    // base case

    if(size == 0){
        return;
    }
    
    // logic to find smallest element in array
    int min = INT32_MAX;
    int index = -1;
    for(int i=0; i<size; i++){
        if(min > arr[i]){
            cout<<"Info:: "<<index <<" ----" << min << "---" << arr[i]<<endl;
            min = arr[i];
            index = i;
        }
    }

    cout<<"Index:: "<<index<<endl;
    swap(arr[0], arr[index]);
    selectedSort(arr+1, size-1);

}

int main(){

    int arr[5] = {10, 3, 1, 4,5};
    int size = 5;

    selectedSort(arr, size);

    cout<<"Sorted Arr "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}