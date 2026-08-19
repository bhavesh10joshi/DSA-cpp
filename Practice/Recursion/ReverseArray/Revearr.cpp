#include<iostream>
#include<vector>
using namespace std;
void ReverseArray(int i , vector<int>&arr)
{
    if(i>=(arr.size())/2)
    {
        return;
    }
    swap(arr[i] , arr[arr.size()-i-1]);
    ReverseArray(i+1 , arr);
}
int main()
{
    cout<<"Enter Size : "<<endl;
    int n; 
    cin>>n;
    vector<int>arr;
    cout<<"Start Entering : "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        int N;
        cin>>N;
        arr.push_back(N);
    }
    ReverseArray(0 , arr);
    cout<<"The ans is : "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}