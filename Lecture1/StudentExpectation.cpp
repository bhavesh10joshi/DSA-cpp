#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    if(m>90)
    {
        cout<<"Excellent"<<endl;
    }
    else if(m>80 && m<=90)
    {
        cout<<"Good"<<endl;
    }
    else if(m>70 && m<=80)
    {
        cout<<"Fair"<<endl;
    }
    else if(m>60 && m<=70)
    {
        cout<<"Meets Expectations"<<endl;
    }
    else
    {
        cout<<"Below Par"<<endl;
    }
    return 0;
}