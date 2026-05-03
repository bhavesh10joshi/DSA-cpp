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
    for(int i = n-1 , k = 1 ; i>=1 ; i-- , k++)
    {
        int swaps = 0;
        bool flag = false;
        for(int j = 0 ; j<i ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swaps++;
                flag = true;
                swap(arr[j] , arr[j+1]);
            }
        }
        cout<<"Pass "<<k<<": ";
        for(int j = 0 ; j<n ; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<", swaps = "<<swaps<<endl;
        if(!flag)
        {
            break;
        }
    }
    return 0;
}