#include <iostream>
using namespace std;
int main()
{
    bool c = true;

    while (true)
    {
        int m, n, sum;
        cin >> m >> n;
        sum = 0;

        if (n > m)
        {
            int temp = n;
            n = m;
            m = temp;
        }
        for (int i = n; i <= m; i++)
        {
            if (i <= 0)
            {
                c = false;
                break;
            }

            else
            {
                cout << i << " ";
                sum += i;
            }
        }
        if (c == false)
        {
            break;
        }
        cout << "Sum=" << sum<<endl;
    }

    return 0;
}
