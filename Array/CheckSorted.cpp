#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];

    bool check = true;
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        arr[i] = no;
        if(i>=1)
        {
            if(arr[i]<arr[i-1])
            {
                check=false;
            }
        }
    }

    if(check)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}