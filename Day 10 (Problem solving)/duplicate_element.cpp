#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int duplicate(int a[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ a[i];
    }
    for (int i = 1; i < size; i++) { // Loop should run from 1 to size-1
        ans = ans ^ i;
    }
    return ans;
}

int main() {
    int n, arr[20];
    cout << "Enter the odd size of array: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The duplicate number is: " << duplicate(arr, n);
}
