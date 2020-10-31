/*Move all negative numbers to beginning and positive to end with constant extra space
An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
Examples : 

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int T, N, K;
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int arrt[8];
    int temp;
  
        for (int p = 0; p < 8; p++)
        {
            for (int j = p + 1; j < 8; j++)
            {
                if (arr[j] < arr[p])
                {
                    temp = arr[p];
                    arr[p] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    
        for (int i = 0; i < 8; i++)
        {
            cout << arr[i] <<"\t";
        }
}