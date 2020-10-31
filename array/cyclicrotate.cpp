#include <iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for (int i = 0; i < T; i++)
    {
        int size;
        cin >> size;
        int a[size];
        for (int j = 0; j < size; j++)
        {
            cin >> a[j];
        }
           cout << a[size-1] << "\t";
        for (int j = 0; j < size - 1; j++)
        {
            
            cout << a[j] << "\t";
        }
    }
}