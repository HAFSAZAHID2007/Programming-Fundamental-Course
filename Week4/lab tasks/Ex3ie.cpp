#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Pleade Enter your name: ";
    cin >> name;
    if (name == "ali")
    {
        cout << "Welcome " << name;
    }
    else
    {
        cout << "Try again!";
    }
}