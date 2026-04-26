#include<iostream>
#include<cmath>
using namespace std;
 float disc(float a, float b, float c){
    int detarminant = b*b-4*a*c;
    int squareroot=sqrt(-detarminant);
    float root1;
    float  root2;
    if (detarminant==0){
     root1=root2 = -b/(2*a);
     cout<<"x = "<<root1;
    }
    else if(detarminant>0){
        
        root1=(-b+squareroot)/(2*a);
        root2=(-b-squareroot)/(2*a);
        cout<<"x = "<<root1<<" and x = "<<root2;
    
    }
    else
    {
     float realpart=-b/(2*a);
     float imaginary=sqrt(-detarminant)/(2*a);
     cout<<"x = "<<realpart<<" + " <<imaginary<<"i"<<endl;
     cout<<"x = "<<realpart<<" - " <<imaginary<<"i"<<endl;
    }

}
main(){
    int x,y,z;
    cout<<"Enter the value of a: ";
    cin>>x;
    cout<<"Enter the value of b: ";
    cin>>y;
    cout<<"Enter the value of c: ";
    cin>>z;
    disc(x,y,z);
    return 0;

}