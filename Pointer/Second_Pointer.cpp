#include <iostream>
using namespace std;

void printNum(int *num)
{

    cout << "Number ----- " << *num << endl;
}

void printLetter(char *Letter)
{
    cout << "Letter ----- " << *Letter << endl;
}

void PrintAny(void *ptr, char type)
{

    switch (type)
    {

    case 'i':
        cout << "Integer is --- " << *((int *)ptr) << endl;
        break;

    case 'c':
        cout << "Character is --- " << *((char *)ptr) << endl;
        break;

    case 's':
        cout << "String --- " << *((string *)ptr) << endl;
        break;
    }
}

int main()
{

    int num = 5;
    char letter = 'A';
    string s = "Maruf";

    // printNum(&num);
    // printLetter(&letter);

    PrintAny(&num, 'i');
    PrintAny(&letter, 'c');
    PrintAny(&s, 's');

    system("pause>0");
    return 0;
}