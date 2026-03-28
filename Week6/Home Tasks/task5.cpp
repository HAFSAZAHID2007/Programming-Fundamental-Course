#include<iostream>
using namespace std;
main(){
    int n;
    char letter;
    cout<<"Enter names of  customers:"<<endl;
    cin>>n;
    string name[n];
    cout<<"Enter the names of "<<n<<" customers:";
    for(int i=0;i<n;i++){
    cin>>name[i];
    }
    cout<<"Enter a letter to check: ";
    cin>>letter;
    int count=0;
    for(int i=0;i<n;i++){
     if(name[i][0]==letter){
     count++;
     }   
    }
    cout<<"Total names starting with "<<letter<<":"<<count;
}