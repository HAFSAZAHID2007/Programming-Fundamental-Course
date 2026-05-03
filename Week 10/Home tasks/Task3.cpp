#include<iostream>
using namespace std;
float taxCalculator(char type,float price);
main(){
    char t;
    cout<<"Enter Vehicle Type Code (M/E/S/V/T): ";
    cin>>t;
    int p;
    cout<<"Enter Vehicle Prize: ";
    cin>>p;
    cout<<"The final price on a vehicle of type "<<t<<" after adding the tax is $"<<taxCalculator(t,p);

}
float taxCalculator(char type,float price){
    float taxrate=0.0;
if(type=='M')
{
    taxrate=0.06;
}
if(type== 'E')
{
    taxrate=0.08;
}
if(type=='S')
{
    taxrate=0.10;
}
if(type=='V')
{
    taxrate=0.12;
}
if(type=='T')
{
    taxrate=0.15;
}
float taxAmount= price * taxrate;
float finalAmount=price+taxAmount;
return finalAmount;
}