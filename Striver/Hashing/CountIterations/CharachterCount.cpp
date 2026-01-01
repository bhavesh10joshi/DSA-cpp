#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Only Lower Case 
    // we can also use string here
    vector<char>vec;
    int n;
    cout<<"Total no of elements of the array !"<<endl;
    cin>>n;
    cout<<"Enter the Elements of the array !"<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        char no;
        cin>>no;
        vec.push_back(no);
    }
    //Hash Table
    int arr[26] = {0};
    for(int i = 0 ; i<n ; i++)
    {
        int no = 'a' - vec[i];
        arr[no] = arr[no] + 1; 
    }
    cout<<"Enter The total no to search for !"<<endl;
    int q;
    cin>>q;
    for(int j = 0 ; j<q ; j++)
    {
        char l;
        cin>>l;
        int no = 'a' - l;
        cout<<"Iterations are "<<arr[no]<<endl;
    }

    return 0;
}