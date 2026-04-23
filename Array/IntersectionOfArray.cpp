#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    int m;
    cin>>m;
    
    for(int i = 0 ; i<m ; i++)
    {
        int l;
        cin>>l;
        int arr1[l];

        for(int i = 0 ; i<l ; i++)
        {
            int no;
            cin>>no;
            arr1[i] = no;
        }
        for(int i = 0 ; i<l ; i++)
        {
            int no;
            cin>>no;
            arr1[i] = no;
        }

        int k;
        cin>>k;

        int arr2[k];

        for(int i = 0 ; i<k ; i++)
        {
            int no;
            cin>>no;
            arr2[i] = no; 
        }

        for(int n = 0 ; n<l ; n++)
        {
            for(int i = 0 ; i<k ; i++)
            {
                if(arr1[n] == arr2[k])
                {
                    vec.push_back(arr1[n]);
                    break;
                }
            }
        }

        for(int j = 0 ; j<vec.size() ; j++)
        {
            cout<<vec[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}