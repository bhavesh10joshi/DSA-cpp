#include<iostream>
using namespace std;
int main()
{
    int positive = 0 , negative = 0 , Even = 0 , Odd = 0;

    int input = 0 , i = 0;
    cin>>input;
    int num;
    while(i<input)
    {
        cin>>num;
        if(num>0)
        {
            positive++;
            if(num%2 == 0)
            {
                Even++;
            }
            else
            {
                Odd++;
            }
        }
        else if(num == 0)
        {
            Even++;
        }
        else
        {
            negative++;
            if(num%2 == 0)
            {
                Even++;
            }
            else
            {
                Odd++;
            }
        }
        i++;
    }
    
    cout<<positive<<endl;
    cout<<negative<<endl;
    cout<<Even<<endl;
    cout<<Odd<<endl;
    
    return 0;
}