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

    for(int i = 1 ; i<n ; i++)
    {
        int temp = arr[i] , j = i-1 , shifts = 0;
        while(j>=0 && arr[j]>temp)
        {
            shifts++;
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        cout<<"Pass "<<i<<": ";
        for(int k = 0 ; k<n ; k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<", ";
        for(int k = 0 ; k<n ; k++)
        {
            cout<<arr[k]<<" ";
            if(k == i)
            {
                cout<<"| ";
            }
        } 
        cout<<", shifts = "<<shifts<<endl;
    }
    return 0;
}