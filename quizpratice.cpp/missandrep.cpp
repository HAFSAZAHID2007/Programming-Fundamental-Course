#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size ";
    cin >> n;

    int arr[n];

     cout<<"Enter elements";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int freq[n + 1] = {0};

    // count frequency
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int missing, repeating;

    for(int i = 1; i <= n; i++) {
        if(freq[i] == 0) {
            missing = i;
        }
        else if(freq[i] == 2) {
            repeating = i;
        }
    }

    cout << "Missing: " << missing << endl;
    cout << "Repeating: " << repeating << endl;

    return 0;
}