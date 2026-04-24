#include<iostream>
using namespace std;
int main()
{
    int n,m , target;
    bool flag = false;
    cin>>n>>m;
    int arr[n][m];
    cin>>target;

    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            int no;
            cin>>no;
            arr[i][j] = no;
            if(no == target)
            {
                flag = true;
            } 
        }
    }
    if(flag)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 0;
}