#include <iostream>
using namespace std;
main()
{
    int correctPin = 1234;
    int Pin[3];
    int choice;
    int balance = 1000;
    int amount;
    bool login = false;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter ATM PIN: ";
        cin >> Pin[i];
        if (Pin[i] == correctPin)
        {
            login = true;
            cout << "Login Successful\n";
            break;
        }
        else
        {
            cout << "Incorrect Pin\n";
        }
    }
    if (login == true)
    {
        while (true)
        {
            cout << "\n--- ATM MENU---\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            if (choice == 1)
            {
                cout << "Current Balance  " << balance << endl;
            }
            else if (choice == 2)
            {
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << "Update balance:" << balance << endl;
            }

            else if (choice == 3)
            {
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount <= balance && amount > 0)
                {
                    balance = balance - amount;
                    cout << "Remaining Balance:" << balance << endl;
                }

                else
                {
                    cout << "Insufficient balance\n";
                }
            }
            else if (choice == 4)
            {
                cout << "Thank you for using ATM\n";
                break;
            }
            else
            {
                cout << "Invalid choice\n";
            }
        }
    }
    else
    {
        cout << "Too many attempts.Access Denied\n";
    }
}
