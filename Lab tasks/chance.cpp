#include<iostream>
using namespace std;
main(){
float i,p;
cout<<"Enter imposters:";
cin>>i;
cout<<"Enter players:";
cin>>p;
float chance;
chance=100*(i/p);
cout<<"Chance :"<<chance <<"%";
}