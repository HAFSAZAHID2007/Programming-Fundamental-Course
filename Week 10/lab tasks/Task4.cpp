#include<iostream>
using namespace std;
int  min ( int number1, int number2);
main()
{ 
    int number01;
    int number02;
    cout<<"Enter the first number: ";
    cin>>number01;
    cout<<"Enter the second number: ";
    cin>>number02;
    cout<<"Minimum nO is "<<min(number01,number02);
    return 0;
    
}
int  min ( int number1, int number2)
{
    int  minimum;
    if (number1<number2){
        minimum=number1;
    }
    else {
        minimum=number2;
        return minimum;
    }
}


