#include <bits/stdc++.h>
using namespace std;

void countingSort(int A[], int size)
{
    int maxVal = A[0], minVal = A[0];

    // find min and max
    for (int i = 1; i < size; i++)
    {
        if (A[i] > maxVal) maxVal = A[i];
        if (A[i] < minVal) minVal = A[i];
    }

    int range = maxVal - minVal + 1;
    int* count = new int[range];

    // initialize count array
    for (int i = 0; i < range; i++)
    {
        count[i] = 0;
    }

    // count frequency
    for (int i = 0; i < size; i++)
    {
        count[A[i] - minVal]++;
    }

    // rebuild sorted array
    int index = 0;
    for (int i = 0; i < range; i++)
    {
        while (count[i]--)
        {
            A[index++] = i + minVal;
        }
    }

    delete[] count; // free memory
}

int main()
{
    int A[] = {2, 5, 3, 1, 5, 87, 5, 3, 9, 8, 67, 54, 34, 2223};
    int size = sizeof(A) / sizeof(A[0]);

    countingSort(A, size);

    for (int i = 0; i < size; i++)
    {
        cout << A[i] << "  ";
    }

    return 0;
}
