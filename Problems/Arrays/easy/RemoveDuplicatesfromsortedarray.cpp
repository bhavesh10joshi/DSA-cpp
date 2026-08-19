#include<iostream>
#include<set>
using namespace std;
int main()
{
    int arr[10] = {1,1,2,2,3,3,4,5,6,6};

    // Brute Force Approach
    // set<int>st;
    // for(int i = 0 ; i<10 ; i++)
    // {
    //     st.insert(arr[i]);
    // }
    // int j = 0;
    // for(auto i = st.begin() ; i!=st.end() ; i++,j++)
    // {
    //     arr[j] = *i;  
    // }

    // for(int i = 0 ; i<10 ; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // Optimized Approach
    int i = 0 ;
    for(int j = i+1 ; j<10 ; j++)
    {
        if(arr[j] != arr[i] && i+1<10)
        {
            swap(arr[i+1] , arr[j]);
            i=i+1;
        }
    }
    for(int j = 0 ; j<10 ; j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0 ; 
}