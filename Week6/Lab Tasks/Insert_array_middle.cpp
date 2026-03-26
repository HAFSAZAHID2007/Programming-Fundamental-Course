#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements for the first array(must be 2):";
    cin >> n;
    cout << "Enter" << n << " elements for the first array, on per line:";
     int arr1[2];
    for (int i = 0; i < 2; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the number of elements for the second array:";
    cin >> n;
    cout << "Enter " << n << " elements for the first array, on per line:";
    int arr2[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int result[102];
    result[0] = arr1[0];
    for (int i = 0; i < n; i++)
    {
        result[i + 1] = arr2[i];
    }

    result[n + 1] = arr1[1];
    cout << "Resulting array: [";
    for (int i = 0; i < n + 2; i++)
    {
        cout << result[i] << " , ";
    }
    cout << "]";
}