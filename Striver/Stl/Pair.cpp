#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int , int> p = {12,13};
    cout<<"The pair p has first element as "<<p.first<<endl;
    pair<int ,pair<int , int>> h ={12,{13,14}};
    cout<<"The second pair is "<<h.second.second<<endl;
    return 0;
}