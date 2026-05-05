#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        int arr[no];
        for(int j = 0 ; j<no ; j++)
        {
            int a;
            cin>>a;
            arr[j] = a;
        }
        int index;
        cin>>index;
        for(int j = index ; j<no ; j++)
        {
            cout<<arr[j]<<" ";
        }
        for(int j = 0 ; j<index ; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}