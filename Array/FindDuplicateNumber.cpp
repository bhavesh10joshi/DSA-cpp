#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;

    for(int i = 0 ; i<m ; i++)
    {
        int n, ans = -1;
        cin>>n;
        int temp[n-1] = {0};

        for(int j = 0 ; j<n ; j++)
        {
            int no;
            cin>>no;

            temp[no] = temp[no] + 1;
            if(temp[no] == 2)
            {
                ans = no;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}