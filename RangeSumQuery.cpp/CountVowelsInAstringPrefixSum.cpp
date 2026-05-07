#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int l;
    cin>>l;
    string s;
    cin>>s;
    vector<int>vec;
    int count = 0 ;
    for(int i = 0 ; i<s.length() ; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
        vec.push_back(count);
    }
    int no;
    cin>>no;
    for(int i = 0 ; i<no ; i++)
    {
        int l,k;
        cin>>l>>k;

        if(l == 1)
        {
            cout<<vec[k-1]<<endl;
        }
        else
        {
            cout<<vec[k-1]-vec[l-2]<<endl;
        }
    }
    return 0;
}


