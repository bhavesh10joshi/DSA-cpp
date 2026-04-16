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

    int posi=0 , me=arr[0] ;

    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i]<arr[posi])
        {
            posi = i;
            me = arr[i];
        }
    }

    cout<<me<<" "<<posi+1<<endl;
    return 0;
}