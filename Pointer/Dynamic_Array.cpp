#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Size : ";
    cin >> size;

    int *myArray = new int[size];

    for (int i = 0; i < size; i++)
    {

        cout << "Array[" << i << "] = ";
        cin >> myArray[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << "    \n";
    }

    delete[] myArray;
    myArray = NULL;

    system("Pause>0");
    return 0;
}