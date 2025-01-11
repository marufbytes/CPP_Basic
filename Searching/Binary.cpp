#include <iostream>
using namespace std;

int BinarySearch(int array[], int size, int target);

int main()
{
    int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(number) / sizeof(number[0]);

    int index;
    int myNum;

    cout << "Enter element to search for: ";
    cin >> myNum;

    index = BinarySearch(number, size, myNum);

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

int BinarySearch(int array[], int size, int target)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == target)
        {
            return mid;
        }
        else if (array[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}