#include <iostream>
using namespace std;

void sort(int array[], int size);

int main()
{

    int array[] = {4, 5, 7, 4, 4, 8, 1, 3, 2};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);

    for (int element : array)
    {
        cout << element << "   ";
    }

    return 0;
}

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
            }
        }
    }
}