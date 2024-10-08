/*
    Problem statement
    Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.

    First index means, the index of first occurrence of x in the input array.

    Do this recursively. Indexing in the array starts from 0.

    Detailed explanation ( Input/output format, Notes, Images )
    Constraints :
    1 <= N <= 10^3

    Sample Input :
    4
    9 8 10 8
    8
    Sample Output :
    1
*/

#include <iostream>
using namespace std;

int firstIndex(int input[], int size, int index, int x)
{
    if (size == 0)
    {
        return -1;
    }

    if (input[index] == x)
    {
        return index;
    }

    return firstIndex(input, size - 1, index += 1, x);
}

int firstIndex(int input[], int size, int x)
{
    return firstIndex(input, size, 0, x);
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int x;

    cin >> x;

    cout << firstIndex(input, n, x) << endl;
}
