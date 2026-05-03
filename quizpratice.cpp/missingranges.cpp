#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int low = arr[0];
    int high = arr[n - 1];

    // before first element
    for(int i = low; i < arr[0]; i++) {
        cout << i << " ";
    }

    // between elements
    for(int i = 1; i < n; i++) {
        for(int j = arr[i - 1] + 1; j < arr[i]; j++) {
            cout << j << " ";
        }
    }

    // after last element
    for(int i = arr[n - 1] + 1; i <= high; i++) {
        cout << i << " ";
    }

    return 0;
}