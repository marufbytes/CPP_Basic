#include <iostream>
using namespace std;

int getMin(int numbers[], int size)
{

    int min = numbers[0];

    for (int i = 1; i < size; i++)
    {

        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[], int size)
{

    int max = numbers[0];

    for (int i = 1; i < size; i++)
    {

        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

int main()
{

    int numbers[5] = {5, 4, -3, 29, 6};
    cout << "Minimum digit is : " << getMin(numbers, 5) << endl;
    cout << "Max value is : " << getMax(numbers, 5) << endl;

    system("Pause>0");
    return 0;
}