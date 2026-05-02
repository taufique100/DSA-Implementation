#include <iostream>

using namespace std;

bool binarySearch(int *arr, int s, int e, int key)
{
    if (s > e){
        return false;
    }

    int mid = s + (e - s) / 2;

    if(arr[mid]==key){
        return true;
    }

    if (arr[mid] == key){
        return true;
    }
    if (arr[mid] < key){
        return binarySearch(arr, mid + 1, e, key);
    }
    else{
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int size = 5;
    int arr[5] = {1, 3, 4, 5, 6};
    int key = 4;
    if(binarySearch(arr, 0, 5, key)){
        cout<<"Key Found"<<endl;
    }else{
        cout << "Key not found"<<endl;
    }

    return 0;
}