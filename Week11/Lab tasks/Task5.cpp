#include <iostream>
using namespace std;
void inputMatrix(int matrix[][3]) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}
void displayMatrix(int matrix[][3]) {
    cout << "\nThe matrix you entered is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

bool checkIdentity(int matrix[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            if (i == j && matrix[i][j] != 1) {
                return false; 
            }
            if (i != j && matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true; 
}

int main() {
    int myMatrix[3][3];

    inputMatrix(myMatrix);
    displayMatrix(myMatrix);

    if (checkIdentity(myMatrix)) {
        cout << "The entered matrix is an identity matrix." << endl;
    } else {
        cout << "The entered matrix is NOT an identity matrix." << endl;
    }

    return 0;
}