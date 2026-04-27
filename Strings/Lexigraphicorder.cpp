#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a , b;
    cin>>a>>b;
    bool flag = false;
    int i = 0 , j = 0;

    if(a == b)
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        for(; i<a.length() && j<b.length() ; i++ && j++)
        {
            int c1 = int(a[i]);
            int c2 = int(b[j]);

            if(c1>c2)
            {
                flag = true;
                cout<<"A"<<endl;
                i++;
                j++;
                break;
            }
            else if(c1<c2)
            {
                flag = true;
                cout<<"B"<<endl;
                i++;
                j++;
                break;
            }
        }
        if(!flag)
        {
            if(i == a.length())
            {
                cout<<"B"<<endl;
            }
            else if(j == b.length())
            {
                cout<<"A"<<endl;
            }
        }
    }

    return 0;
}