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

        for(int i = 0 ; i<n ; i++)
        {
            int no;
            cin>>no;

            arr[i] = no;
        }

        for(int left = 0 , right = n-1 ; left < right ; )
        {
            if(arr[left] == 0)
            {
                left++;
            }
            else if(arr[right] == 1)
            {
                right--;
            }

            if(arr[left] != 0 && arr[right] != 1)
            {
                swap(arr[left] , arr[right]);
                left++;
                right--;
            }
        }

        for(int i = 0 ; i<n ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
  
    return 0;
}