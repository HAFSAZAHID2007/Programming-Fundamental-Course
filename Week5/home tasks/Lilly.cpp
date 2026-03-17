#include <iostream>
using namespace std;
main()
{
    int age, toyprice, priceWM;
    cout << "Enter Lilly age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> priceWM;
    cout << "Enter the unit price of each toy: ";
    cin >> toyprice;
    int toys = 0, money = 0, giftmoney = 0;
    for (int i = 1; i < age; i++)
    {
        if (i % 2 == 0)
        {
            giftmoney += 10;
            money += giftmoney - 1;
         }
        else
        {toys++;}
      
    }
      money += toys * toyprice;
    if (money >= priceWM)
    {cout << "Yes! " << (money - priceWM) << endl; }
    else
    {cout << "No! " << (priceWM - money) << endl;}
}
