#include<iostream>
using namespace std;
int main()
{
    int a , b , c;
    int Min , Max;
    
    cin>>a>>b>>c;
    
    if(a>=b && a>=c)
    {
        Max = a;
        if(b<=c)
        {
            Min = b;
        }
        else
        {
            Min = c;
        }
    }    
    else if(b>=a && b>=c)
    {
        Max = b;
        if(c<=a)
        {
            Min = c;
        }
        else
        {
            Min = a;
        }
    }
    else
    {
        Max = c;
        if(b<=a)
        {
            Min = b;
        }
        else
        {
            Min = a;
        }
    }

    cout<<"Min = "<<Min<<endl;
    cout<<"Max = "<<Max<<endl;
    return 0;
}