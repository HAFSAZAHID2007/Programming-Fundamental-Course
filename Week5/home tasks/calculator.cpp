#include <iostream>
using namespace std;
main()
{
    while (true)
    {
        int choice,
            num1, num2, result;
        cout << "--- Simple Calculator ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction " << endl;
        cout << "3. Multiplication " << endl;
        cout << "4. Divison" << endl;
        cout << "5. Clear screen " << endl;
        cout << "6. Exit " << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter first number:";
            cin >> num1;
            cout << "Enter second number:";
            cin >> num2;
            result = num1 + num2;
        }
        else if (choice == 2)
        {
            cout << "Enter first number:";
            cin >> num1;
            cout << "Enter second number:";
            cin >> num2;
            result = num1 - num2;
        }
        else if (choice == 3)
        {
            cout << "Enter first number:";
            cin >> num1;
            cout << "Enter second number:";
            cin >> num2;
            result = num1 * num2;
        }
        else if (choice == 4)
        {
            cout << "Enter first number:";
            cin >> num1;
            cout << "Enter second number:";
            cin >> num2;
            result = num1 / num2;
        }
        else if (choice == 5)
        {
            cout << "Clear Screen";
        }
        else if (choice == 6)
        {
            cout << "Exiting Calculator. Goodbye!";
            break;
        }
        else
        {
            cout << "Invalid choice";
        }
        cout << "Result: " << result << endl
             << endl;
    }
}