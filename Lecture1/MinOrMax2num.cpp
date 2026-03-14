#include<iostream>
using namespace std;
int main()
{
    int n1 , n2;
    cin>>n1>>n2;
    
    // int Min = min(n1 , n2); 
    // int Max = max(n1 , n2);
    
    int Min; 
    int Max; 
    if(n1 >= n2)
    {
        Min = n2;
        Max = n1;
    }
    else
    {
        Min = n1;
        Max = n2;    
    }

    cout<<"Min = "<<Min<<endl;
    cout<<"Max = "<<Max<<endl;

    return 0;
}