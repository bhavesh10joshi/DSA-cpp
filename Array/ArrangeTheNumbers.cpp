#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        int n1 ; 
        cin>>n1;

        int arr[n1];
        int val = 1;
        bool increase = true; 

        for(int j = 0 ; j<n1 ; j++)
        {
            if(increase)
            {
                if(val < n1)
                {
                    arr[j] = val;
                    val = val+2;
                }
                else if(val >= n1)
                {
                    if(val == n1)
                    {
                        arr[j] = val;
                        val = val-1;
                    }
                    else
                    {
                        val = val-1;
                        arr[j]=val;
                    }
                    increase=false;
                }
            }
            else
            {
                if(val > 0 && n1%2 == 0)
                {
                    val = val-2;
                    arr[j] = val;
                }
                else if(val>0 && n1%2 != 0)
                {
                    arr[j]=val;
                    val = val-2; 
                }
                else
                {
                    break;
                }
            }
        }
        for(int j = 0 ; j<n1 ; j++)
        {
            cout<<arr[j]<<" ";
        } 
        cout<<endl;
    }
    return 0;
}