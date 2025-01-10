
#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int id;
    string name;
    char grade;
};

int **totalStudent(Student *s, int n, int &count)
{
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i].grade == 'F')
        {
            count++;
        }
    }

    // Memory
    int **studentId = new int *[count];
    for (int i = 0, k = 0; i < n; i++)
    {
        if (s[i].grade == 'F')
        {
            studentId[k] = new int(s[i].id);
            k++;
        }
    }
    return studentId;
}

int main()
{

    ifstream fin("studentData.txt");
    Student s[40];
    int n = 0;

    while (fin >> s[n].id >> s[n].name >> s[n].grade)
    {
        n++;
    }

    int count;
    int **studentId = totalStudent(s, n, count);

    cout << "Number of students with F : " << count << endl;

    cout << "ID of students with grade F : ";
    for (int i = 0; i < count; i++)
    {
        cout << *studentId[i] << "  ";
    }
    cout << endl;

    return 0;
}
