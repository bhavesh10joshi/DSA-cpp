#include<bits/stdc++.h>
using namespace std;
vector<int>temp;
void Union(vector<int>vec1 , vector<int>vec2)
{
    set<int>st;
    
    for(int i = 0 ; i<vec1.size() ; i++)
    {
        st.insert(vec1[i]);
    }
    for(int i = 0 ; i<vec2.size() ; i++)
    {
        st.insert(vec2[i]);
    }

    for(auto it:st)
    {
        temp.push_back(it);
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