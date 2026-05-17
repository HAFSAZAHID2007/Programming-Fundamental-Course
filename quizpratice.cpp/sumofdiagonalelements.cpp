#include<iostream>
using namespace std;
main(){
    int arr[3][3],sum=0;
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=i;j==i;j++){
        sum  =sum+ arr[i][j];
           
        }
    
    }
     cout<<"Sum of Diaognal elements are "<<sum<<endl ;


     int sum1=0;
for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j+i==2)
            {
                sum1 = sum1+arr[i][j];
                
            }
        }
    }
    cout << "Sum of Antidiagonal element are: " << sum1<<endl;
}