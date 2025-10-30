#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int count = 1;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = n-1  ; j>=0 ; j--)
        {
            if(j<=i)
            {
                cout<<"*";
            }
            else{
                cout<<count;
                count++;
            }
        }
        for(int j = n-1  ; j>=0 ; j--)
        {
            if(j>=i)
            {
                cout<<count;
                count++;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
        count=1;
    }

    return 0;
}