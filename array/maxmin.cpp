#include <iostream>
#include <stdio.h>
using namespace std;
struct Pair
{
    int min;
    int max;
};

struct Pair findmaxmin(int arr[], int size)
{
    struct Pair minmax;
    minmax.max = arr[0];
    minmax.min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (minmax.max < arr[i])
            minmax.max = arr[i];
        else
        {
            minmax.min = arr[i];
        }
    }

    return minmax;
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    display(arr, size);
    struct Pair minmax = findmaxmin(arr, size);
    cout << endl
         << minmax.max << endl;
    cout << endl
         << minmax.min << endl;
}