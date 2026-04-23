#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;

    for(int i = 0 ; i<m ; i++)
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

        for(int j = 1 ; j<n ; )
        {
            swap(arr[j-1], arr[j]);
            j = j+2;
        }
        
        for(int k = 0 ; k<n ; k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    } 



    return 0;
}