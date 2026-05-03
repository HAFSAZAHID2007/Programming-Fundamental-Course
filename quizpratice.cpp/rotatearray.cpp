#include<iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cout << "Enter the elements to rotate";
    cin >> d;
    for (int  i = d-1;i>=0;i--){
        cout<<arr[i];
    }
    for (int j = n-1;j>=d;j--){
        arr[j];
    }
    cout<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i];
    }
}
