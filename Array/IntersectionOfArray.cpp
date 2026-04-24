#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int j = 0 ; j<n ; j++)
    {
        vector<int>vec1;
        vector<int>vec2;
        vector<int>vec;
        int n1;
        cin>>n1;

        for(int k = 0 ; k<n1 ; k++)
        {
            int no;
            cin>>no;
            vec1.push_back(no);
        }

        int n2;
        cin>>n2;

        for(int k = 0 ; k<n2 ; k++)
        {
            int no;
            cin>>no;
            vec2.push_back(no);
        }

        for(int i = 0 ; i<vec1.size() ; i++)
        {
            for(int k = 0 ; k<vec2.size() ; k++)
            {
                if(vec1[i] == vec2[k])
                {
                    vec.push_back(vec1[i]);
                    vec1.erase(vec1.begin() + i);
                    vec2.erase(vec2.begin() + k);
                    i--;
                    k--;
                    break;
                }
            }
        }
        for(int i = 0 ; i<vec.size() ; i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}