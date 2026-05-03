#include<iostream>
using namespace std;
 float calculateBalance(float balance, int years){
    float rate = 0;
    if (balance < 10000){
        rate = 5;
    }
    else if ( balance <= 50000){
        rate =7;
    }
    else{rate = 10;}
    if (years>=3){rate = rate + 2;}
    float interest = (rate*balance)/100;
    float updateBalance = balance + interest;
    return updateBalance;
 }
main(){
int b,y;
cout<<"Enter Balance and years: ";
cin>>b>>y;
cout<<"Updated Balance: "<<calculateBalance(b,y);
}