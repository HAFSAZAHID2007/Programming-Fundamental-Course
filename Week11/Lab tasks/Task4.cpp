#include <iostream>
using namespace std;
int sum(int arr[][3], int rowsize)
{
    int total = 0;
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < rowsize; j++)
        {
            total = total + arr[i][j];
        }
    }
    return total;
}
main()
{
    int row;
    cout << "Enter rowsize:";
    cin >> row;
    int arr[row][3];
    cout << "Enter the elements for the matrix: \n";
    for (int i=0;i<row;i++){
        for (int j = 0;j<row;j++){
            int n;
            cout<<"Enter element at postiion "<<"["<<i<<"]"<<"["<<j<<"]";
            cin>>arr[i][j];
        }
    }
  cout<<"The sum of elements in the matrix is : "<<sum(arr,row);
}