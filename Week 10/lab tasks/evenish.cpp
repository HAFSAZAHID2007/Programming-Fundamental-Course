#include <iostream>
using namespace std;
string evenOrodd(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    if (sum % 2 == 1)
    {
        return "oddish";
    }
    else
    {

        return "evenish";
    }
}
main()
{
    int size = 5;
    int arr[5];
    cout << "Enter a number: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << evenOrodd(arr, size);
}