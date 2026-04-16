#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int el;
    cin>>el;

    int arr[n];

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        arr[i] = no;
    }

    int count = 0;

    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i] == el)
        {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}