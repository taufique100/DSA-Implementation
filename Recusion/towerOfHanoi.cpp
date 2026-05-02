#include <iostream>
using namespace std;

void towerOfHanoi(int n, int from, int to, int aux, int &count) {
    if (n == 0) return;

    // Step 1: Move n-1 disks from 'from' to 'aux'
    towerOfHanoi(n - 1, from, aux, to, count);
    cout<<"111-->"<<n<<endl;

    // Step 2: Move the nth disk and increment count
    count++;
    // cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;

    // Step 3: Move n-1 disks from 'aux' to 'to'
    cout<<"22--"<<n<<endl;
    towerOfHanoi(n - 1, aux, to, from, count);
}

int main() {
    int n = 3;
    int count = 0;
    towerOfHanoi(n, 1, 3, 2, count);
    cout << "Total moves: " << count << endl; // Output: 7
    return 0;
}
