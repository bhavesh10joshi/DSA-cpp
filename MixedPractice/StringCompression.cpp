#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
        string st;
        cin>>st;
        string s;
        int count = 1;
        char initial = st[0];
        for(int j = 1 ; j<st.length() ; j++)
        {
            if(st[j] == initial)
            {
                count++;
            }
            else if(st[j] != initial)
            {
                s = s + initial;
                if(count > 1)
                {
                    s = s + to_string(count);
                }
                initial = st[j];
                count=1;
            }
        }
        s = s + initial;
        if(count > 1)
        {
            s = s + to_string(count);
        }
        cout<<s<<endl;
    }
    return 0;
}