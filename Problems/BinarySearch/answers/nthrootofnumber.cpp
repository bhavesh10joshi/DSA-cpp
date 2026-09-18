#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;

    int high = n;
    int low = 0 , ans = -1;

    while(low<=high)
    {
        int mid = (high+low)/2;
        int multi = 1 , i=1 ; 
        while(i<=m)
        {
            multi = multi*mid;
            i++;
        }
        if(multi == n)
        {
            ans = mid;
            break;
        }
        else if(multi>n)
        {
            high=mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}