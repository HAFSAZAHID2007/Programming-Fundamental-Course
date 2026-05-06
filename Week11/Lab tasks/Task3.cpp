#include <iostream>
using namespace std;

void printToyataBlue(int arr[5][5])
{
    cout << " Toyata Blue Cars are: " << arr[1][3] << endl;
}
int countRedCars(int arr[5][5])
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total = total + arr[i][0];
    }
    return total;
}
int countNissanCars(int arr[5][5])
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total = total + arr[2][i];
    }
    return total;
}
int converter(int arr[5][5], int coloIndex)
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total = total + arr[i][coloIndex];
    }
    return total;
}
int transposeMatrix(int arr[5][5])
{
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

main()
{
    const int rowSize = 5;
    const int colSize = 5;
    int carsData[rowSize][colSize] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}

    };
    printToyataBlue(carsData);
    cout << " Total Red Cars: " << countRedCars(carsData) << endl;
    cout << " Total Nissan Cars: " << countNissanCars(carsData) << endl;
    int colorindex;
    cout << " Enter colour index: ";
    cin >> colorindex;
    cout << " Total cars for colorindex " << colorindex << " : " << converter(carsData, colorindex) << endl;
    transposeMatrix(carsData);
}