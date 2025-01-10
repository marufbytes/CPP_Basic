
#include <bits/stdc++.h>
using namespace std;

struct Point
{
    string name;
    int x;
    int y;
};

Point findMax(Point *p, int n)
{
    Point maxPoint;
    double maxDistance = 0;

    for (int i = 1; i < n; ++i)
    {
        double distance = sqrt(pow(p[i].x, 2) + pow(p[i].y, 2));
        if (distance > maxDistance)
        {
            maxDistance = distance;
            maxPoint = p[i];
        }
    }

    return maxPoint;
}

int main()
{
    ifstream fin("point.txt");
    Point p[100];

    for (int i = 0; i < 100; i++)
    {
        fin >> p[i].name >> p[i].x >> p[i].y;
    }

    for (int i = 0; i < 100; i++)
    {
        cout << p[i].name << " \t" << p[i].x << " \t" << p[i].y << endl;
    }

    Point maxPoint = findMax(p, 100);
    cout << "Max disTance : " << maxPoint.name << " " << maxPoint.x << " " << maxPoint.y << endl;

    return 0;
}
