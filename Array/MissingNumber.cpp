#include<iostream>
using namespace std;
int main()
{
    long long int m;
    cin>>m;

    for(long long int i = 0 ; i<m ; i++)
    {
        long long int n;
        cin>>n;
        long long int arr[n];

        for(long long int j = 0 ; j<n ; j++)
        {
            long long int no;
            cin>>no;
            arr[j] = no; 
        }

        for(long long int k = 0 ; k<n ; k++)
        {
            bool found = false;
            for(long long int l = 0 ; l<n ; l++)
            {
                if(l == k)
                {
                    continue;
                }
                if(arr[l] == arr[k])
                {
                    found = true;
                    break; 
                }
            }
            if(!found)
            {
                cout<<arr[k]<<endl;
                break;
            }
        }
    }


    return 0;
}