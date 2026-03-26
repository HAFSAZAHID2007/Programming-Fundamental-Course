#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    int count=0;
    cout << "Enter " << n << " numbers,one per line:" << endl;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        bool found = false;
        for (int j = 0; j < count; j++)
        {
            if (arr[j] == num)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "Already Entered "<<num<<endl; 
        }
        else
        {
            arr[count] = num;
            count++;
        }
    }
    cout << "Unique numbers entered:"; 
    for (int j = 0; j < count; j++)
    {
        cout << arr[j] << " ";
    }
}
