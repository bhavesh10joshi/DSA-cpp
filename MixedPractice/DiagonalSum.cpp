#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int arr[n][n];
    
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            int no;
            cin>>no;
            arr[i][j] = no;
        }
    }

    for(int i = 0 ; i<n ; i++)
    {
        sum = sum + arr[i][i];
    }

    cout<<sum<<endl;
    return 0;
}