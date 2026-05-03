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

    for(int i = 0 ; i<n-1 ; i++)
    {
        int minindex = i;
        for(int j = i+1 ; j<n ; j++)
        {
            if(arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[minindex] , arr[i]);
        cout<<"Pass "<<i+1<<": ";
        for(int j = 0 ; j<n ; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<", min_selected = "<<arr[i]<<endl;
    }
    return 0;
}