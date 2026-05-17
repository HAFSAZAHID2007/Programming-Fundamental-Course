#include<iostream>
using namespace std;
main(){
    cout<<"Entered elements for  matrix"<<endl;
    int a[3][3];
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    bool found  = false;
    int n;
    cout<<"Enter the number you want to search: ";
    cin>>n;
    int s;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]==n){
             s =a[i][j];
                bool  found = true;
                break;
            }
        }
    }
if (found){
       cout<<"number is found"<<s;
}
else cout<<"Number is not found ";
}