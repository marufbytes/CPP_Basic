#include <iostream>
using namespace std;

void Insertion(int array[], int size);

int main()
{
    int array[] = {4, 2, 6, 3, 7, 9, 3, 2, 5, 4, 2};
    int size = sizeof(array) / sizeof(array[0]);

    Insertion(array, size);

    for (int elements : array)
    {
        cout << elements << "   ";
    }

    return 0;
}

void Insertion(int array[], int size)
{
    for (int i = 1; i < size; i++) // Start from the second element
    {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }
}