#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5};

    int largest = 0;

    for(int i = 0 ; i<6 ; i++)
    {
        if(arr[i]>=largest)
        {
            largest = arr[i];
        }
    }
    cout<<"The largest element is "<<largest<<endl;

    return 0;
}