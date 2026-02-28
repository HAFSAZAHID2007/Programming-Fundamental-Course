#include<iostream>
using namespace std;
main(){
float megabytes;
cout<<"Enter the size in megabytes:";
cin>>megabytes;
float bits;
bits=1024*1024*8*megabytes;
cout<<megabytes<<" MB is equivalent t0 " <<bits<<" bits";

}