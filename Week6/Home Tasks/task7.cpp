#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter number of products:";
    cin >> n;
    cout << "\n\n";
    string productNames[n];
    float price[n];
    int quantity[n];
    float total;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name of product " << i + 1 << ": ";
        cin >> productNames[i];

        cout << "Enter price of " << productNames[i] << ":  $";
        cin >> price[i];
        cout << "Enter quantity  of " << productNames[i] << ": ";
        cin >> quantity[i];
        cout << "\n";
    }
    cout << "Product Inventory Report\n";
    cout << "------------------------\n";
    for (int i = 0; i < n; i++)
    {        total = price[i] * quantity[i];
        cout << productNames[i] << ": $" << price[i] << ", " << quantity[i] << " in stock, Total value: $" << total << endl;
    }
}