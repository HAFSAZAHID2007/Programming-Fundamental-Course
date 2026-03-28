#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter the number of elements:";
    cin >> n;
    int arr[n];
       
 
    cout << "Enter " << n << " numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int lrgest=arr[0];
    int smallest=arr[0];
      for (int i = 0; i < n; i++){
        if(arr[i]>lrgest){
            lrgest=arr[i];
        }
    
    if(arr[i]<smallest){
smallest=arr[i];
    }
}
cout<<"largest="<<lrgest<<endl;
cout<<"smallest="<<smallest;
}