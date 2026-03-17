#include <iostream>
using namespace std;
main()
{
    int money, year;
    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter year: ";
    cin >> year;
    int age=18;
    for (int i = 1800; i <= year; i++)
    {
        if (i % 2 == 0)
        {money-=12000;}
        else
        { money-=(12000 + 50 * age);}
        age++;
    }
        if (money >= 0)
        { cout<<"Yes! he will live a carefree life and will have "<<money<<" dollars left"; }
        else
        { cout << "He will need "<< money <<" dollars to survive"; }   
}