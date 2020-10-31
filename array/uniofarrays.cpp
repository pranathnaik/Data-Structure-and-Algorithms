// Union of two arrays
//assuming non repeative elements in array a and b
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int asize, bsize;
        cin >> asize;
        cin >> bsize;
        int a[asize];
        int b[bsize];
        for (int i = 0; i < asize; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < bsize; i++)
        {
            cin >> b[i];
        }
        int found = 0;

        for (int i = 0; i < asize; i++)
        {
            cout << a[i] << "\t";
        }

        for (int i = 0; i < bsize; i++)
        {
            int temp = b[i];
            for (int j = 0; j < asize; j++)
            {
                if (temp == a[j])
                {
                    found = 1;
                }
            }
            if (found == 0)
                cout << temp << "\t";
            found = 0;
        }
    }
}