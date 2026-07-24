#include<iostream>
using namespace std;
void print(int count)
{   
    if(count > 5)
    {
        return;
    }
    cout<<"Hello"<<endl;
    count++;
    print(count);
}
int main()
{
    print(1);   
    return 0;    
}