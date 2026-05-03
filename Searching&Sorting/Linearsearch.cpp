#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    bool flag = false;
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        arr[i] = no;
    }
    int target ;
    cin>>target;
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i] == target)
        {
            flag = true;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}