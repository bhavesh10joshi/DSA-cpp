#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }

    int low = 1;
    int high = vec.size()-2;
    int ans = -1;
    
    while(low<=high)
    {
        if(vec.size() == 1)
        {
            ans = vec[0];
            break;
        }
        else if(vec[0] != vec[1])
        {
            ans = vec[0];
            break;
        }
        else if(vec[vec.size()-1] != vec[vec.size()-2])
        {
            ans=vec[vec.size()-1];
            break;
        }
        int mid = (low+high)/2;

        if(vec[mid] != vec[mid-1] && vec[mid] != vec[mid+1])
        {
            ans = vec[mid];
            break;
        }
        else if(vec[mid] == vec[mid+1])
        {
            if(mid%2 == 0)
            {
                low = mid+1; 
            }
            else
            {
                high = mid-1;
            }
        }
        else if(vec[mid] == vec[mid-1])
        {
            if(mid%2 == 0)
            {
                high = mid-1; 
            }
            else
            {
                low = mid+1;
            }
        }
    }
    cout<<ans<<endl;


    return 0;
}