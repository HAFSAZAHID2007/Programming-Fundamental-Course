#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int first = -1;
    int second = -1;
    int third = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
        {
            third = arr[i];
        }
    }
    int min1 = 1, min2 = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2)
        {
            min2 = arr[i];
        }
    }

    int case1 = first * second * third;
    int case2 = min1 * min2 * first;
    if (case1 > case2)
        cout << case1;
    else
        cout << case2;

    return 0;
}
