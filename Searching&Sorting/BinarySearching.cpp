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
    int target;
    cin>>target;
    int mid = (0 + (n-1))/2;
    int start = 0 , end = (n-1);
    while(start<=end)
    {
        mid = (start+end)/2;
        if(arr[mid]<target)
        {
            start = mid+1;
        }
        else if(arr[mid]>target)
        {
            end = mid-1;
        }
        else if(arr[mid] == target)
        {
            cout<<"YES"<<endl;
            flag = true;
            break;
        }
    }
    if(!flag)
    {
        cout<<"NO"<<endl;
    }

    return 0;
}