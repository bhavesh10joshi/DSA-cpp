#include<iostream>
using namespace std;
int main()
{
    int n1;
    cin>>n1;
    
    for(int i = 0 ; i<n1 ; i++)
    {
        int n;
        cin>>n;
        
        int arr[n];
        int arr1[n] , j=0;
        
        for(int i = 0 ; i<n ; i++)
        {
            int no;
            cin>>no;

            arr[i] = no;
            if(no == 0)
            {
                arr1[j] = 0;
                j++;
            }
        }
        for( ; j<n ; j++)
        {
            arr1[j] = 1;
        }
        for(int i = 0 ; i<n ; i++)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}