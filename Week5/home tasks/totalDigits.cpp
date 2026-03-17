#include<iostream>
using namespace std;
main(){int num , digits=0;
    cout<<"Enter a number: ";
    cin>>num;
    if(num==0){
        digits=digits+1; }
     while(num!=0){
        num=num/10;
        digits=digits+1;
    }
cout<<"Total numbers of digits:"<<digits;
}