#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int i = 0, j = 0;

    while (i < n)
    {
        for (j = 0; j <= i; j++)
        {
            cout << char(i + 'A') << " ";
        }
        cout << endl;
        i++;
    }
    return 0;
}