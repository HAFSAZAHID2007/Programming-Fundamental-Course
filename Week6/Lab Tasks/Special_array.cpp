#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter " << n << " elements of the array: ";
    int special[100];
    for (int i = 0; i < n; i++)
    {
        cin >> special[i];
    }
    bool found = true;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && special[i] % 2 != 0)
        {
            found = false;
            break;
        }
        else if (i%2!=0 && special[i] % 2 == 0)
            {
                found = false;
                break;
            }
        }
    if (found)
    {
        cout <<"The array is special";
    }
    else
    {
        cout<<"The array is not special";
    }
}