#include <iostream>
using namespace std;
int main()
{
    int n, nsp = 1;
    cout << "enter value of n:";
    cin >> n;
    int m = n - 1;
    for (int a = 1; a <= n; a++)
    {
        cout << a;
    }
    for (int k = n - 1; k >= 1; k--)
    {
        cout << k;
    }

    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n - i; j++)
        {
            cout << a;
            a++;
        }
        for (int p = 1; p <= nsp; p++)
        {
            if (i == n)
                break;
            cout << " ";
            a++;
        }
        nsp += 2;
        for (int q = 1; q <= m + 1 - i; q++)
        {
            cout << 2 * n - a;
            a++;
        }

        cout << endl;
    }
}