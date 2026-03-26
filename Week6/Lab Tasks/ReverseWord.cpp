#include <iostream>
using namespace std;
main()
{
    char word[100];
    cout << "Enter a string: ";
    cin >> word;
    int i =0; 
   while( word[i] != '\0'){i++;}
   cout<<"Reversed String: ";
    {
        for (int j = i - 1; j >= 0; j--)
        {
            cout<< word[j];
        }
    }
}