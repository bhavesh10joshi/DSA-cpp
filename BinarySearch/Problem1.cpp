#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    int n;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }

    int target;
    cin>>target;

    int high = vec.size()-1;
    int low = 0;
    int ans = -1;

    while(high>=low)
    {
        int mid = (high + low)/2;

        if(vec[mid] == target)
        {
            ans = mid;
            break;
        }
        else if(vec[mid] < target)
        {
            low = mid+1; 
        }
        else
        {
            high = mid-1;
        }
    }

    if(ans == -1)
    {
        cout<<"Not found " <<endl;
    }
    else
    {
        cout<<"Index is : "<<ans<<endl;
    }


    return 0;
}