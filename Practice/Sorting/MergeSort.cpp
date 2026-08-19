#include<iostream>
#include<vector>
using namespace std;
void merge(int Low , int High , int mid , vector<int>&vec)
{
    vector<int>temp;
    int left = Low;
    int right = mid+1;

    while(left<=mid && right<=High)
    {
        if(vec[left]<=vec[right])
        {
            temp.push_back(vec[left]);
            left++;
        }
        else
        {
            temp.push_back(vec[right]);
            right++;
        }
    }
    while(left <= mid)
    {
        temp.push_back(vec[left]);
        left++;
    }
    while(right <= High)
    {
        temp.push_back(vec[right]);
        right++;
    }

    // Now pasting sorted values inside the main vector(vec) , according to the respective positions 
    for(int i = Low ; i<=High ; i++)
    {
        vec[i] = temp[i-Low];
    }
}
void Devide(int Low , int High , vector<int>&vec)
{
    if(Low>=High)
    {
        return;
    }
    int mid = (Low+High)/2;
    Devide(Low , mid , vec);
    Devide(mid+1 , High , vec);
    merge(Low , High , mid , vec);
}
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

    Devide(0 , vec.size()-1 , vec);
    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }
    

    return 0;
}