#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //left side
    int count = 1;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = n-1 ; j>=0 ; j--)
        {
            if(j <= i)
            {
                cout<<count;
                count++;
            }
            else{
                cout<<" ";
            }
        } 
        count =1;
        for(int j = 1 ; j<=i ; j++)
        {
            if(j<=i)
            {
                cout<<count;
                count++;
            }
            else{
                cout<<" ";
            }
        } 
        count =1;
        cout<<endl;
    }
    return 0;
}