#include<iostream>
using namespace std;
main(){
    cout<<"Entered elements for first matrix"<<endl;
    int a[3][3],b[3][3],c[3][3];
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Entered elements for second matrix";
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
     for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            int sum=0;
            for (int k=0;k<3;k++){
                sum =sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
  
}