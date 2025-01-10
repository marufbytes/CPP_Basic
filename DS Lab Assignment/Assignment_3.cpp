#include <bits/stdc++.h>  
using namespace std;

// random 
void randDisplay(double *vec, int size, const string &vectorName)
{
    cout << vectorName << " Elements:  ";
    for (int i = 0; i < size; i++)
    {
        vec[i] = rand() % 100; 
        cout << vec[i] << "  ";
    }
    cout << endl;
}

// magnitude
double Magnitude(double *vec, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += vec[i] * vec[i];
    }
    return sqrt(sum);
}

// dot
double Dot(double *vecA, double *vecB, int size)
{
    double dot = 0;
    for (int i = 0; i < size; i++)
    {
        dot += vecA[i] * vecB[i];
    }
    return dot;
}

// angle
double Angle(double *vecA, double *vecB, int size)
{
    double magnitudeA = Magnitude(vecA, size);
    double magnitudeB = Magnitude(vecB, size);
    double dot= Dot(vecA, vecB, size);

    //radian
    double rad = acos(dot / (magnitudeA * magnitudeB));

    // degree
    return rad * (180.0 / M_PI);
}

int main()
{
    srand(time(0)); 

    int n;

    cout << "Number of elements in vectors A and B each : ";
    cin >> n;

    double *vectorA = new double[n];
    double *vectorB = new double[n];

    randDisplay(vectorA, n, "Vector A");

    randDisplay(vectorB, n, "Vector B");

    cout << "Magnitude of vector A: " << Magnitude(vectorA, n) << endl;
    cout << "Magnitude of vector B: " << Magnitude(vectorB, n) << endl;
    cout << "Dot Product of A and B: " << Dot(vectorA, vectorB, n) << endl;
    cout << "Angle between A and B : " << Angle(vectorA, vectorB, n) << endl;

    return 0;
}
