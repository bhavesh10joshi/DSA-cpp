#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<int>vec;
    cin>>n;
    
    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }

    int pm , count = 0;
    cin>>pm;

    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(vec[i]>=pm)
        {
            count++;
        }
    }

    cout<<"Pass: "<<count<<endl;
    cout<<"Fail: "<<vec.size()-count<<endl; 
    

    return 0;
}