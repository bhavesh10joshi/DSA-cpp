#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int el;
    cin>>el;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        arr[i] = no;
    }

    bool found = false;
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i] == el)
        {
            found = true;
            break;
        }
    }
    
    if(found)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}