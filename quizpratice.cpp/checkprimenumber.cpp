#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];

    cout << "Enter matrix:\n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }

    

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int num = arr[i][j];
            int count = 0;

            if(num > 1)
            {
                for(int k=2; k<num; k++)
                {
                    if(num % k == 0)
                    {
                        count++;
                        break;
                    }
                }

                if(count == 0)
                {
                    cout << num << " ";
                }
            }
        }
    }
}