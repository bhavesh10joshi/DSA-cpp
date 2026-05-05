#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int max = INT_MIN , min = INT_MAX;
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        if(no>=max)
        {
            max = no;
        }
        if(no<=min)
        {
            min = no;
        }
        sum = sum + no;
    }
    cout<<sum<<" "<<max<<" "<<min<<" "<<(sum/n)<<endl;
    return 0;
}