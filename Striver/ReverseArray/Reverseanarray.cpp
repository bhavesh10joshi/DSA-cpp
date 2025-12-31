#include<iostream>
using namespace std;
void rev(int i , int j , int arr[])
{
    if(i >= j)
    {
        return;
    }
    else
    {
        swap(arr[i] , arr[j]);
        rev(i+1 , j-1 , arr);
    }
}
void print(int i , int n , int arr[])
{
    if(i >= n)
    {
        return;
    }
    else
    {
        cout<<arr[i]<<" ";
        print(i+1 , n , arr);
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    rev(0,4,arr);
    cout<<"The array is "<<endl;
    print(0 , 5 , arr);
    return 0;
}