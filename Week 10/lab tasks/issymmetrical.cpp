#include <iostream>
using namespace std;
string  issymetrical(int number[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (number[i] != number[size - i- 1])
        {
            return "The number is not symmetrical";
        }
    }
    return "The number is symmetrical";
}
main()
{
    int size = 3;
    int number[size];
    cout << "Enter 3 digits number ";
    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }
    cout<<issymetrical(number,size);
}
