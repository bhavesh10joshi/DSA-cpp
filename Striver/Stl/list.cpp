#include<bits/stdc++.h>
using namespace std;
int main()
{
list<int>h ;
h.push_back(2);
h.emplace_back(4);
h.push_front(5);
h.emplace_front(9);

for(auto it = h.begin() ; it != h.end() ; it++)
{
    cout<<*(it)<<endl;
}




    return 0;
}