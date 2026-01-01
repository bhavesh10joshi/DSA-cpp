#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int n;
    cout<<"Total no of elements of the array !"<<endl;
    cin>>n;
    cout<<"Enter the Elements of the array !"<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }
    //Hash Table
    int arr[13] = {0};
    for(int i = 0 ; i<n ; i++)
    {
        arr[vec[i]] = arr[vec[i]] + 1; 
    }
    cout<<"Enter The total no to search for !"<<endl;
    int q;
    cin>>q;
    for(int j = 0 ; j<q ; j++)
    {
        int no;
        cin>>no;
        cout<<"Iterations are "<<arr[no]<<endl;
    }

    return 0;
}