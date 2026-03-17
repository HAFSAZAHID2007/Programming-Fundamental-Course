#include<iostream>
using namespace std;
main(){
int Pin, choice,balance=1000, depoMoney,add,Withdraw,sub;

for(int i = 1; i<=3; i++){
    cout<<"Enter ATM Pin:";
    cin>>Pin;
    if(Pin==1234)
    {cout<<"Login Successful"<<endl<<endl;
    break;}
    else{cout<<"Wrong Pin "<<endl;}
    if(i==3 && !(Pin==1234) ){
        cout<<"Too many attempts.Card Blocked.";
    }
}
for(int i = 1; i<=5; i++){
    cout<<"------ ATM MENU ------"<<endl;
    cout<<"1. Check Balance "<<endl;
    cout<<"2. Deposit Money "<<endl;
    cout<<"3. Withdraw Money "<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter choice:";
    cin>>choice;
    if(choice==1){
        cout<<"current balance:"<<balance<<endl<<endl; 
    }
    else if (choice==2){
        cout<<"Enter Amount to Deposit: ";
        cin>>depoMoney;
        balance=depoMoney+balance;
        cout<<"Money Deposited  Successfully "<<endl<<endl;
    }
    else if (choice==3){
        cout<<"Enter Amount to Withdraw:";
        cin>>Withdraw;
        balance=balance-Withdraw;
        cout<<"Please collect your cash"<<endl<<endl;
    }
    else if (choice==4){
        cout<<"Thanks for using ATM";
    }
    
}
}