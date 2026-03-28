#include<iostream>
using namespace std;
main(){
    int n,even=0;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[100];
    cout<<"Enter "<<n<<" numbers: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[100];
        if(arr[100]%2==0){
            even=even+1;
        }
    }
    cout<<"Total even numbers: "<<even;
}