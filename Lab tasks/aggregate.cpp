#include<iostream>
using namespace std;
main(){
string name;
cout<<"Enter the student name:";
cin>>name;
float  matric;
cout<<"Enter  matriculation marks (out of 1100):";
cin>>matric;
float inter; 
cout<<"Enter intermediate marks (out of 550):";
cin>>inter;
float ecat;
cout<<"Enter ecat marks (out of 400):";
cin>>ecat;
float aggregate;
aggregate=(matric/1100*0.10+(inter/550) *0.40+(ecat/400)*0.50)*100;
cout<<"Aggregate score for Rehman is  "<<aggregate;
}