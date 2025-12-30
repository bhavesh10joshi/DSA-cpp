#include<iostream>
using namespace std;
int count = 0;
void print()
{
    cout<<"i am inside the print function / count = "<<count<<endl;
    if(count == 10)
    {
        return ;
    }
    else
    {
        count++;
        print();
    }
};
int main()
{
    print();
    return 0;
}