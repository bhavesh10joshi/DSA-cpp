#include<iostream>
using namespace std;
int arr[5] = {5,3,4,3,5};
int n = 5; 
int Count(int no)
{
    int count = 0;
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i] == no)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;

    cout<<"Total No of Iterations are :-"<<Count(n)<<endl;
    return 0;
}