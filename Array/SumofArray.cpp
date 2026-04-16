#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;

        arr[i] = no;
    }
     
    long long int sum = 0 ;

    for(int i = 0 ; i<n ; i++)
    {
        sum = sum + arr[i];
    }

    cout<<sum<<endl;

    return 0;
}