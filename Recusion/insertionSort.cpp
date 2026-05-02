#include <iostream>

using namespace std;

void insertionSort(int *arr, int size, int index)
{
    // Base case
    if (size == index)
    {
        return;
    }

    // logic
    for (int i = index; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
    }

    insertionSort(arr, size, index + 1);
}

int main()
{

    int size = 5;
    int arr[5] = {4, 3, 1, 5, 2};

    insertionSort(arr, 5, 0);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}