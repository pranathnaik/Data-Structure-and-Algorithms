/*Given an array arr[] denoting heights of N towers and a positive integer K, modify the heights of each tower either by increasing or decreasing them by K only once. Find out the minimum difference of the heights of shortest and longest modified towers.*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        int big, small;
        for (int i = 0; i < n; i++)
        {
            if (i >= n / 2)
            {
                arr[i] -= k;
            }
            else
            {
                arr[i] += k;
            }
        }

        small = arr[0];
        big = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < small)
                small = arr[i];

            if (arr[i] > big)
                big = arr[i];
        }
        int fin = big - small;

        return fin;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}