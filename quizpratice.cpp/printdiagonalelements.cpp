#include<iostream>
using namespace std;
main(){
    int arr[3][3],diagonal;
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=i;j==i;j++){
        diagonal= arr[i][j];
         }
     cout<<"Diaognal elements are "<<diagonal<<endl;
    }
    
}