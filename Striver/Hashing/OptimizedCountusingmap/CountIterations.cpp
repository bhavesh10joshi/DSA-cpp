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
    map<int , int>mpp;
    for(int i = 0 ; i<n ; i++)
    {
        mpp[vec[i]] = mpp[vec[i]] + 1; 
    }
    cout<<"Enter The total no to search for !"<<endl;
    int q;
    cin>>q;
    for(int j = 0 ; j<q ; j++)
    {
        int no;
        cin>>no;
        cout<<"Iterations are "<<mpp[no]<<endl;
    }

    return 0;
}