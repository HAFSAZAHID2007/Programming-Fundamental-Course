#include<iostream>
using namespace std;
main()
{
string name;
cout<<"Enter the movie name: ";
cin>>name;
int adult_ticket;
cout<<"Enter the adult ticket price: $";
cin>>adult_ticket;
int child_ticket;
cout<<"Enter the child ticket price: $";
cin>>child_ticket;
int no_adultTicket;
cout<<"Enter number of adult tickets sold: ";
cin>>no_adultTicket;
int no_childTicket;
cout<<"Enter number of children tickets sold: ";
cin>>no_childTicket;
int charity;
cout<<"Enter percentage of amount to donate for charity: ";
cin>>charity;
cout<<"------------------------------------- \n";
cout<<"Movie: "<<name <<endl ;
int total_earning;
total_earning=(adult_ticket * no_adultTicket)+( child_ticket * no_childTicket );
cout<<"Total Amount Generated from ticket sales: $" <<total_earning<<endl;
int charity_amount;
charity_amount=total_earning * charity/100;
cout<<"Donation to charity: "<<"$"<<charity_amount<<endl;
int remaining;
remaining=total_earning - charity_amount;
cout<<"Remaining amount after donation: $"<<remaining;

}