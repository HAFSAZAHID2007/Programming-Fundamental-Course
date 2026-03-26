#include <iostream>
using namespace std;
main()
{
    int number[5];
    for (int count = 0; count < 5; count = count + 1)
    {
        cout << "Enter Number: ";
        cin >> number[count];
    }
    cout << "The 1st element in array is: " << number[0] << endl;
    cout << "The last element in array is: " << number[4] << endl;
}