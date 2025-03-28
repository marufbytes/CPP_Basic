#include <iostream>
using namespace std;

void mergeSort(int array[], int l, int h);

int main()
{
    int array[] = {4, 1, 20, 12, 11, 9, 5};
    int size = sizeof(array) / sizeof(array[0]);

    mergeSort(array, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "  ";
    }

    return 0;
}

void mergeSort(int array[], int l, int h)
{
    if (l >= h)
    {
        return;
    }

    int mid = l + (h - l) / 2;

    // recursively sort left and right halves
    mergeSort(array, l, mid);
    mergeSort(array, mid + 1, h);

    // merging the sorted halves
    int temp[h - l + 1];
    int i = l, j = mid + 1, k = 0;

    while (i <= mid && j <= h)
    {
        if (array[i] <= array[j])
        {
            temp[k++] = array[i++];
        }
        else
        {
            temp[k++] = array[j++];
        }
    }

    // copying remaining elements from left half
    while (i <= mid)
    {
        temp[k++] = array[i++];
    }

    // copying remaining elements from right half
    while (j <= h)
    {
        temp[k++] = array[j++];
    }

    // copying sorted elements back to original array
    for (int m = 0; m < k; m++)
    {
        array[l + m] = temp[m];
    }
}
