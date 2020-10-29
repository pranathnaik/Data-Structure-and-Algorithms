#include <iostream>
#include <stdio.h>
using namespace std;
void reversearray(int arr[], int size)
{
  int temp;
  for (int i = 0; i < size / 2; i++)
  {
    temp = arr[i];
    arr[i] = arr[size - i];
    arr[size - i] = temp; 
  }
}

void display(int arr[], int size)
{
  for (int i = 0; i <= size; i++)
  {
    cout << arr[i] << "\t";
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int size = 6;
  display(arr, size);
  reversearray(arr, size);
  cout << endl
       << "reverse is as follows" << endl;
  display(arr, size);
}