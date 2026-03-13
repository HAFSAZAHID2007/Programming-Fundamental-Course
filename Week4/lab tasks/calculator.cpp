#include<iostream>
using namespace std;
main()
{
 int num1,num2,calculate;
 char op;
 cout<<"Welcome to the calculator";
 cout<<"Enter first number: ";
 cin>>num1;
 cout<<"Enter the operator: ";
 cin>>op;
 cout<<"Enter second number: ";
 cin>>num2;
 if(op=='+'){
calculate=num1-num2;
cout<<num1<<"-"<<num2 <<"="<<calculate;
}
if(op=='-'){
    calculate=num1+num2;
  cout<<num1<<"+"<<num2 <<"="<<calculate;
}
if(op=='*'){
    calculate=num1/num2;
     cout<<num1<<"/"<<num2<<"="<<calculate;
}
if(op=='/'){
    calculate=num1*num2;
      cout<<num1<<"*"<<num2<<"="<<calculate;
}
}