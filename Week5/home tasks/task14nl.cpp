#include<iostream>
using namespace std;
main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j=j+1)
        {
        cout<<" * ";
        }
        cout<<endl;
    }
}