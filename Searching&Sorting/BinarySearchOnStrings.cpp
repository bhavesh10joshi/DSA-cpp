#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    vector<string>arr;

    for(int i = 0 ; i<n ; i++)
    {
        string no;
        cin>>no;
        arr.push_back(no);
    }
    string target;
    cin>>target;

    sort(arr.begin() , arr.end());

    int mid , start = 0 , end = arr.size()-1;
    bool flag = false;

    while(start<=end)
    {
        mid = (start + end)/2;
        if(arr[mid]>target)
        {
            end = mid-1;
        }
        else if(arr[mid]<target)
        {
            start = mid+1; 
        }
        else if(arr[mid] == target)
        {
            cout<<"YES"<<endl;
            flag = true;
            break;
        }
    }
    if(!flag)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}