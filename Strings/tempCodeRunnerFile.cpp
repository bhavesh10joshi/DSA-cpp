#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a , b;
    cin>>a>>b;
    bool flag = false;
    int i = 0 ;

    if(a == b)
    {
        cout<<"Equal"<<endl;
    }
    else
    {
        for(; i<a.length() && i<b.length() ; i++)
        {
            int c1 = int(a[i]);
            int c2 = int(b[i]);

            if(c1>c2)
            {
                flag = true;
                cout<<"A"<<endl;
                break;
            }
            else if(c1<c2)
            {
                flag = true;
                cout<<"B"<<endl;
                break;
            }
        }
        if(!flag)
        {
            if(a.length()<b.length())
            {
                cout<<"B"<<endl;
            }
            else if(a.length()>b.length())
            {
                cout<<"A"<<endl;
            }
        }
    }

    return 0;
}