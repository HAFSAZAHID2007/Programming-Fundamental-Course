#include<iostream>
using namespace std;
int myfunction(int number);
main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
   cout<<"total : "<<myfunction(n);

}
int myfunction(int number){
    int total = number * 5;
    return total;
} 