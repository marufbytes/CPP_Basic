#include <iostream>
using namespace std;

// prime
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

// factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int digit;

    cout << "Please enter any digit: ";
    cin >> digit;

    if (isPrime(digit))
    {
        cout << "You entered a prime number and it is: " << digit << endl;
        cout << "Factorial is: " << factorial(digit) << endl;
        cout << "You entered a number that is not a prime number." << endl;
    }

    return 0;
}