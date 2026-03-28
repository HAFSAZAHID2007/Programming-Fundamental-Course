#include <iostream>
using namespace std;
main()
{
    int n;
    int sum = 0;
 
    cout << "Enter number of elements:";
     cin >> n;

       int elements[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> elements[i];
        sum = sum + elements[i];
    }
    cout << "Sum of all elements: " << sum << endl;
}