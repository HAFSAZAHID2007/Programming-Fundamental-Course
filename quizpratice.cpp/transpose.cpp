#include<iostream>
using namespace std;
main(){
    int r;
    cout<<"Enter the rows";
    cin>>r;
    int c;
    cout<<"Enter the column";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
}
    for(int i=0;i<r;i++){
        for(int j=1;j<c;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
