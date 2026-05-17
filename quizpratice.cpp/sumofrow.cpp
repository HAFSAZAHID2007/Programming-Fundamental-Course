#include<iostream>
using namespace std;
main(){
    int arr[3][3];
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
   cout<<"transpose of a matrix"<<endl;

    for(int i=0; i<3; i++){
         int rowsum=0;
         int columsum=0;
        for(int j=0;j<3;j++){
            rowsum=rowsum+arr[i][j];
            columsum=columsum+arr[j][i];
        }
        cout<<"Total row sum is :"<<rowsum<<"  Total column sum is :"<<columsum<<endl;
    }
}