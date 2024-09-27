/**
 *  Problem statement
    Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in the output array (in increasing order).

    Do this recursively. Indexing in the array starts from 0.

    Hint:
    Try making a helper function with the required arguments and call the helper function from the allIndexes function.
    Detailed explanation ( Input/output format, Notes, Images )
    Constraints :
    1 <= N <= 10^3
    Sample Input :
    5
    9 8 10 8 8
    8
    Sample Output :
    1 3 4

*/

#include <iostream>
using namespace std;

void allIndexes(int input[], int inputIndex, int size, int x, int output[], int &outputIndex)
{
    if (size == 0)
    {
        return;
    }

    if (input[inputIndex] == x)
    {
        output[outputIndex++] = inputIndex;
    }

    return allIndexes(input, inputIndex += 1, size - 1, x, output, outputIndex);
}

int allIndexes(int input[], int size, int x, int output[])
{
    int outputIndex = 0;
    allIndexes(input, 0, size, x, output, outputIndex);
    return outputIndex;
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

    int *output = new int[n];

    int size = allIndexes(input, n, x, output);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }

    delete[] input;

    delete[] output;
}
