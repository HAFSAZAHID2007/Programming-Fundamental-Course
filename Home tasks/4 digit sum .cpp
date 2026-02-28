#include<iostream>
using namespace std;
main()
{
int number,digit,sum=0;
cout<<"Ener 4 digit numbers";
cin>>number;
digit=number%10;
sum=sum+digit;
number=number/10;
digit=number%10;
sum=sum+digit;
number=number/10;
digit=number%10;
sum=sum+digit;
number=number/10;
digit=number%10;
sum=sum+digit;
number=number/10;
cout<<"Sum of the individual digits: "<<sum;
}