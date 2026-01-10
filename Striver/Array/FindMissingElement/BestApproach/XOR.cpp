#include<bits/stdc++.h>
using namespace std;
int XOR(vector<int>vec)
{
    int xor1 = 0;
    int xor2 = 0;
    for( int i = 0 ; i<vec.size() ; i++)
    {
        xor1 = xor1 ^ vec[i];
        xor2 = xor2 ^ i;
    }
    xor2 = xor2 ^ vec.size();
    return xor1 ^ xor2; 
}
int main()
{
    vector<int>vec;
    int n ;
    cin>>n;
    for(int i = 0 ; i<n-1 ; i++)
    {
        int no;
        cin>>no;
        vec.push_back(no);
    }
    cout<<"The missing no is "<<XOR(vec)<<endl;


    return 0;
}