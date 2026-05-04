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
        int arr[n];
        for(int j = 0 ; j<no ; j++)
        {
            int k;
            cin>>k;
            arr[i] = k;
        }
        
        bool flag = false;
        for(int j = 1 ; j<no-1 ; j++)
        {
            if(arr[j]<arr[j-1] && arr[j]<arr[j+1])
            {
                cout<<j<<endl;
                flag = true;
            }
        }
        if(!flag)
        {
            if(arr[no-1]<arr[no-2] && arr[no-1]<arr[0])
            {
                cout<<no-1<<endl;
                flag=true;
            }
            if(!flag)
            {
                cout<<"0"<<endl;
            }
        }
    }
    return 0;
}