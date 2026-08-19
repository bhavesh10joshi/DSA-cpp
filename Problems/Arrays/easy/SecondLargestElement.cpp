#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,5,5};

    // int lelement = 0;
    // int slelement = 0;

    // Optimized Approach
    // for(int i = 0 ; i<5 ; i++)
    // {
    //     if(arr[i]>lelement)
    //     {
    //         slelement = lelement;
    //         lelement = arr[i];
    //     }
    //     else if(arr[i]>slelement)
    //     {
    //         slelement = arr[i];
    //     }
    // }

    // Brute Force approach
    // sort(arr, arr+5);
    // int lelement = arr[4];
    // int slelement = 0;
    // for(int i = 0 ; i<=3 ; i++)
    // {
    //     if(arr[i] != lelement)
    //     {
    //         slelement = arr[i];
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // cout<<lelement<<" & "<<slelement<<endl;

    // Better Approach
    int lelement = 0;

    for(int i = 0 ; i<5 ; i++)
    {
        if(arr[i]>lelement)
        {
            lelement = arr[i];
        }
    }

    int slelement = 0;

    for(int i = 0 ; i<5 ; i++)
    {
        if(arr[i]>slelement && arr[i] != lelement)
        {
            slelement = arr[i];
        }
    }
    cout<<lelement<<" & "<<slelement<<endl;


    return 0;
}