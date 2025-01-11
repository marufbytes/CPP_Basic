#include <iostream>
using namespace std;

void sort(int array[], int size); // Function to sort the array using Selection Sort

int main()
{
    int array[] = {4, 5, 7, 4, 4, 8, 1, 3, 2};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for (int i = 0; i < size; i++) // Loop to print the sorted array
    {
        cout << array[i] << " ";
    }

    return 0;
}

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++) // Loop to move the boundary of the unsorted part
    {
        int minIndex = i;                  // Assume the current element is the minimum
        for (int j = i + 1; j < size; j++) // Loop to find the minimum element in the unsorted part
        {
            if (array[j] < array[minIndex]) // Update minIndex if a smaller element is found
            {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}