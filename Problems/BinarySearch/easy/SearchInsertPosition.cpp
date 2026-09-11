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

    int location = -1;
    int high = vec.size()-1 , low = 0;
    
    while(high>=low)
    {
        int mid = (high + low)/2;

        if(vec[mid] == target)
        {
            location = mid;
            break;
        }
        else if(vec[mid] < target)
        {
            low = mid+1; 
        }
        else
        {
            if(mid == 0)
            {
                location = 0;
                break;
            }
            else if(mid == vec.size()-1 && vec[mid-1]<target)
            {
                location=mid;
                break;
            }
            else
            {
                location = mid;
                high=mid-1;
            }
        }
    }
    return 0;
}