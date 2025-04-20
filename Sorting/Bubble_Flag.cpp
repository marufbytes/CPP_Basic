#include <iostream>
using namespace std;

void Bubble(int array[], int n);

int main()
{
    int array[] = {3, 5, 7, 8, 54, 3, 6, 7, 5, 4, 56, 7, 5645, 5, 676, 5, 34, 54};
    int size = sizeof(array) / sizeof(array[0]);
  
    Bubble(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "   ";
    }

    return 0;
}

void Bubble(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int flag = 0; 

        for (int j = 0; j < n - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1; 
            }
        }

        if (flag == 0)
            break;
    }
}
