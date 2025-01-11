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

void MinMax(int numbers[], int size, int *min, int *max)
{

    for (int i = 1; i < size; i++)
    {

        if (numbers[i] > *max)
        {

            *max = numbers[i];
        }

        if (numbers[i] < *min)
        {

            *min = numbers[i];
        }
    }
}

int main()
{

    int numbers[5] = {5, 4, -3, 29, 6};

    int max = numbers[0];
    int min = numbers[0];

    // cout<< "Minimum digit is : "<<getMin(numbers,5)<<endl;
    // cout<<"Max value is : "<<getMax(numbers,5)<<endl;

    MinMax(numbers, 5, &min, &max);

    cout << "Min : " << min << endl;
    cout << "Max is : " << max << endl;

    system("Pause>0");
    return 0;
}