#include <iostream>
using namespace std;
main()
{
    int arr[3][3];
    int diagonal;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j+i==2)
            {
                diagonal = arr[i][j];
                cout << "Antidiagonal element are: " << diagonal<<endl;
            }
        }
    }
}