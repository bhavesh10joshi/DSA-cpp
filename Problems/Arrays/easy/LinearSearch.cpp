#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }
    
    int no;
    cin>>no;

    bool found = false; 
    for(int i = 0 ; i<vec.size() ; i++)
    {
        if(vec[i] == no)
        {
            found=true;
            cout<<"Found !"<<endl;
            break;
        }
    }
    if(!found)
    {
        cout<<"Not found !"<<endl;
    }
    return 0;
}