#include <iostream>
using namespace std;
main()
{
    string username, password;
    string usernames[3];
    bool login = false;
    int choice;
    string studentname[3];
    int age[3];
    string courses[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Username:";
        cin >> username;
        cout << "Enter password:";
        cin >> password;
        usernames[i] = username;
        if (username == "admin" && password == "1234")
        {
            cout << "Login Successfully:"<<endl;
            login = true;
            break;
        }
        else
        {
            cout << "Invalid Credentials"<<endl;
        }
    }
    if (login == true)
    {
        while (true)
        {
            cout << "\n--- University Management System ---" << endl;
            cout << "1. Add Student" << endl;
            cout << "2. View Students " << endl;
            cout << "3. Add Course" << endl;
            cout << "4. View Courses " << endl;
            cout << "5. Exit " << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            if (choice == 1)
            {
                for (int i = 0; i < 3; i++)
                {
                    cout << "Enter student name:";
                    cin >> studentname[i];
                    cout << "Enter student age:";
                    cin >> age[i];
                    cout<<"Student Successfully added \n";
                }
            }
            else if (choice == 2)
            {
                for (int i = 0; i < 3; i++)
                {
                     cout << studentname[i] << " - " << age[i] << endl;
                    
                }
            }
            else if (choice == 3)
            {
                for (int i = 0; i < 3; i++)
                {
                    cout << "Enter course: ";
                    cin >> courses[i];
                }
            }
            else if (choice == 4)
            {
                for (int i = 0; i < 3; i++)
                {
                    cout << courses[i] << endl;
                }
            }
            else if(choice==5)
            {

                cout << "Program Ended";
                break;
            }
            else
            {cout<<"Invalid choice";}
        }
    }
    else
    {
        cout << "Too many attempts denied";
    }
}