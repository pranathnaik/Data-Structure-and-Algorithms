/*Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

Input:
The first line contains an integer 'T' denoting the total number of test cases. Then T testcases follow. Each testcases contains two lines of input.
The first line denotes the size of the array N.
The second lines contains the elements of the array A separated by spaces.

Output: 
For each testcase, print the sorted array.

Constraints:
1 <= T <= 500
1 <= N <= 106
0 <= Ai <= 2

Example:
Input :
2
5
0 2 1 2 0
3
0 1 0

Output:
0 0 1 2 2
0 0 1

Explanation:
Testcase 1: After segragating the 0s, 1s and 2s, we have 0 0 1 2 2 which shown in the output.*/

#include <iostream>
using namespace std;
int main()
{
    int count0 = 0,
        count1 = 0,
        count2 = 0,
        T,
        N,
        size;
    cout << "enter the no test cases" << endl;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> size;
        for (int j = 0; j < size; j++)
        {
            cin >> N;
            if (N == 0)
                count0++;
            if (N == 1)
                count1++;
            if (N == 2)
                count2++;
        }
        while (count0--)
            cout << "0" << "\t";

        while (count1--)
            cout << "1" << "\t";

        while (count2--)
            cout << "2" << "\t";
    }
}