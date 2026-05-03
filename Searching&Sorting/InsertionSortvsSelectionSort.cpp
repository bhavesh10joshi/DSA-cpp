#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec1;
    vector<int>vec2;

    for(int i = 0 ; i<n ; i++)
    {
        int no;
        cin>>no;
        for(int j = 0 ; j<no ; j++)
        {
            int n1;
            cin>>n1;
            vec1.push_back(n1);
            vec2.push_back(n1);
        }

        int shifts = 0 , swaps = 0; 
        // Insertion Sort
        for(int i = 1 ; i<no ; i++)
        {
            int temp = vec1[i] , j = i-1;
            while(j>=0 && vec1[j]>temp)
            {
                shifts++;
                vec1[j+1] = vec1[j];
                j--;
            }
            vec1[j+1] = temp;
        }
        vec1 = vec2;
        // Selection Sort
        for(int i = 0 ; i<no-1 ; i++)
        {
            int minindex = i;
            for(int j = i+1 ; j<no ; j++)
            {
                if(vec1[j] < vec1[minindex])
                {
                    minindex = j;
                }
            }
            if(minindex != i)
            {
                swap(vec1[minindex] , vec1[i]);
                swaps++;
            }
        }
        if(swaps>shifts){
            cout<<"Insertion Sort"<<endl;
        }
        else if(swaps<shifts)
        {
            cout<<"Selection Sort"<<endl;
        }
        else
        {
            cout<<"Tie"<<endl;
        }
        vec1.clear();
        vec2.clear();
    }
    return 0;
}