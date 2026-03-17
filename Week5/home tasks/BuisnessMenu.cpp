#include<iostream>
using namespace std;
main(){
    while(true){
   int choice;
   cout<<"--- Restaurant Management System ---"<<endl;
   cout<<"1. View Food Menu"<<endl;
   cout<<"2. Place Order "<<endl;
   cout<<"3. View Order Status "<<endl;
   cout<<"4. Generate Bill "<<endl;
   cout<<"5. Contact Staff "<<endl;
   cout<<"6. Exit "<<endl;
   cout<<"Enter your choice (1-6): ";
   cin>>choice;
   if(choice==1){cout<<"You selected:View Food Menu."<<endl<<endl;}
   else if(choice==2){cout<<"You selected:Place Order."<<endl<<endl;}
   else if(choice==3){cout<<"You selected:View Order Status."<<endl<<endl;}
   else if(choice==4){cout<<"You selected:Generate Bill."<<endl<<endl;}
   else if(choice==5){cout<<"You selected:Contact Staff."<<endl<<endl;}
   else if(choice==6){cout<<"Exiting Restaurant Management System.Thank You!."<<endl<<endl;
   break;}
   else{cout<<"Invalid choice!"<<endl;}
   }
} 
