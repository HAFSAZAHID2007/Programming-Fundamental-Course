#include<iostream>
using namespace std;
main()
{
    int a,b,hcf,lcm;
    int i=1;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    while(i<=a && i<=b)
    {
        if(a%i==0 && b%i==0 )
        {hcf=i; }
         i=i+1;
    }
      cout<<"GCD of "<<a<<" and "<<b<<" is: "<<hcf<<endl;
      lcm=(a*b)/hcf;
      cout<<"LCM of "<<a<<" and "<<b<<" is: "<<lcm;
}