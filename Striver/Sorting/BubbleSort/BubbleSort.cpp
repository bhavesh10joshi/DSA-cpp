#include<bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int>&vec)
{
    for(int i = vec.size()-1 ; i >= 0 ; i--)
    {
        // bool isSwap = false; This isSwap can be used to optimize the code 
        for(int j = 0 ; j <= i-1 ; j++)
        {
            if(vec[j]>vec[j+1])
            {
                swap(vec[j] , vec[j+1]);
                // isSwap = true;
            }
        }
        // if(isSwap == false)
        // {
        //     break;
        // }
    }
}
int main()
{
    vector<int>vec;
    int n;
    cout<<"Enter the No of elements in the array !"<<endl;
    cin>>n;
    cout<<"Start entering the Elements of the array !"<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }
    BubbleSort(vec);
    //printing the array
    for(int i = 0 ; i<vec.size() ; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}