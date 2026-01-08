#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
vector<int>temp;
void Union(vector<int>vec1 , vector<int>vec2)
{
    int i = 0 , j = 0;
    if(vec1[i]<=vec2[i])
    {
        temp.push_back(vec1[i]);
    }
    else{
        temp.push_back(vec2[i]);
    }
    while(i<vec1.size() && j<vec2.size())
    {
        if(vec1[i]<=temp[temp.size()-1])
        {
            i++;
        }
        if(vec1[i]<=temp[temp.size()-1])
        {
            temp.push_back(vec1[i]);
            i++;
        }
    } 
}
int main(){
    vector<int>vec1;
    vector<int>vec2;
    int n1;
    cin>>n1;
    for(int i = 0 ; i<n1 ; i++)
    {
        int no;
        cin>>no;
        vec1.push_back(no);
    }
    int n2;
    cin>>n2;
    for(int j = 0 ; j<n2 ; j++)
    {
        int no;
        cin>>no;
        vec2.push_back(no);
    }
    
    Union(vec1 , vec2);

    cout<<"The answer is "<<endl;

    for(int j = 0 ; j<temp.size() ; j++)
    {
        cout<<temp[j]<<" ";
    }
    return 0;
}