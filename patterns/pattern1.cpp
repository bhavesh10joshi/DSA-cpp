#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: "<<endl;
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }
    for(int j = 0 ; j <= (rows-1) ; j++)
    {
        for(int k = 1 ; k <= j ; k++)
        {
            
        }
    }
    return 0;
}
