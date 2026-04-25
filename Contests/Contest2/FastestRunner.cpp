#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec;
    int min = INT_MAX , loci = -1; 
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
        if(min>=no)
        {
            min=no;
            loci = i+1;
        }
    }
    cout<<loci<<endl;
    return 0;
}