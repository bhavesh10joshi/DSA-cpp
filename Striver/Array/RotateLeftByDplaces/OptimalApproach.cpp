#include<bits/stdc++.h>
using namespace std;
void Reverse(int low , int high , vector<int>&vec )
{
    int i = low;
    int j = high;
    while(i<=j)
    {
        swap(vec[i] , vec[j]);
        i++;
        j--;
    }  
}
void Rotate(vector<int>&vec , int k)
{
    k = k % vec.size();
    Reverse(0 , vec.size()-1 , vec);
    Reverse(0 , k-1 , vec);
    Reverse(k , vec.size()-1 , vec);
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
    int k ;
    cin>>k;
    Rotate(vec,k);
    for(int i = 0 ; i<n ; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
