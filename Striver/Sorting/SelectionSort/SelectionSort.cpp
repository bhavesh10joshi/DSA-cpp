#include<bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int>&vec)
{
    for(int i = 0 ; i<vec.size()-1  ; i++)
    {
        pair<int , int>posi;
        posi.first = vec[i];
        posi.second = i;
        for(int j = i+1 ; j<vec.size() ; j++)
        {
            posi.first = min(posi.first , vec[j]);
            if(posi.first == vec[j]){
                posi.second = j ;
            }
        }
        swap(vec[i] , vec[posi.second]);
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
    SelectionSort(vec);
    //printing the array
    for(int i = 0 ; i<vec.size() ; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}