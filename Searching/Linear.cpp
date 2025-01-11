#include <iostream>
using namespace std;

int Linear(int array[], int size, int target);

int main()
{
    int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(number) / sizeof(number[0]);

    int index;
    int myNum;

    cout << "Enter element to search for: ";
    cin >> myNum;

    index = Linear(number, size, myNum);

    if (index != -1)
    {
        cout << "Element is present at index " << index << endl;
    }
    else
    {
        cout << "Element is not present in array" << endl;
    }

    return 0;
}

int Linear(int array[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}