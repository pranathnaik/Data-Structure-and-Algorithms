//max no of jumps to reach end of the array
#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\t";
    }
    int i = 1;
    int current=a[0];
    while (i < size)
    {
        if (current >= size - 1)
            break;
        else
        {
            current = a[i];
            count++;
        }
        i++;
    }

    // arr[T]=countjump;        1 2 4 5 6
    //
    cout << endl
         << count;
    // for (int i = T; i >0; i--)
    // {
    //   cout<<arr[i]<<"\t";
    // }
}