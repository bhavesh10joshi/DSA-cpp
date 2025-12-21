#include<iostream>
using namespace std;
int main()
{
    int age ;
    cin>>age;

    if(age<18)
    {
        cout<<"not elegible for a job "<<endl;
    }
    else if(age>=18)
    {
        cout<<"eleible for a job !"<<endl;
        if(age>=55 && age<57)
        {
            cout<<"Elegible but retiremen soon !"<<endl;
        }
        else if(age>57)
        {
            cout<<"Retirement soon !"<<endl;
        }  
    }
    return 0;
}