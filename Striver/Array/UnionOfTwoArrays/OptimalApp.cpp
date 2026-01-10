#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
void Union(vector<int>arr1 , vector<int>arr2)
{
    int i = 0;
    int j = 0;
    while(i<arr1.size() && j<arr2.size())
    {
        if(arr1[i]<arr2[j])
        {
            if(vec.empty() || vec.back() != arr1[i])
            {
                vec.push_back(arr1[i]);
            }
            i++;
        }
        if(arr1[i] > arr2[j])
        {
            if(vec.empty() || vec.back() != arr2[j])
            {
                vec.push_back(arr2[j]);
            }            
            j++;
        }
        if(arr1[i] == arr2[j])
        {
            if(vec.empty() || vec.back() != arr1[i])
            {
                vec.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while(i<arr1.size())
    {
        if(vec.empty() || vec.back() != arr1[i])
        {
            vec.push_back(arr1[i]);
        }
        i++;
    }
    while(j<arr2.size())
    {
        if(vec.empty() || vec.back() != arr2[j])
        {
            vec.push_back(arr2[j]);
        }
        j++;
    }
}
int main()
{
    vector<int>arr1;
    vector<int>arr2;
    
    int n1,n2;
    cin>>n1;
    cin>>n2;

    for(int i = 0 ; i<n1 ; i++)
    {
        int no;
        cin>>no;
        arr1.push_back(no);
    }
    for(int j = 0 ; j<n2 ; j++)
    {
        int no;
        cin>>no;
        arr2.push_back(no);
    }
    Union(arr1 , arr2);
    cout<<"The answer of this "<<endl;
    for(int i = 0 ; i<vec.size() ; i++)
    {   
        cout<<vec[i]<<" ";
    }   
    return 0;
}
// 6
// 6
// 1
// 1
// 2
// 3
// 4
// 5
// 2
// 3
// 4
// 4
// 5
// 6    