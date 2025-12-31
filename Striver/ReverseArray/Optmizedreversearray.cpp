#include<iostream>
using namespace std;
int arr[5] = {1,2,3,4,5};
int n = 5;
void print(int i)
{
    if(i >= n)
    {
        return;
    }
    else
    {
        cout<<arr[i]<<" ";
        print(i+1);
    }
}
void rev(int i)
{
    if(i>=n/2)
    {
        return;
    }
    else
    {
        swap(arr[i],arr[n-i-1]);
        rev(i+1);
    }
}
int main()
{
    rev(0);
    print(0);
    return 0;
}