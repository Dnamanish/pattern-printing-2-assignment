#include <iostream>
using namespace std;
int main()
{
    int n, nsp = 1;
    cout << "enter value of n:";
    cin >> n;
    int  m = n - 1;
    for (int a = 1; a <= 2 * n - 1; a++)
    {
        cout << char(a + 64);
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << char(j + 64);
        }
        for (int p = 1; p <= nsp; p++)
        {
            if (i == n)
                break;
            cout << " ";
        }
        nsp += 2;
        for (int q = 1; q <= m + 1 - i; q++)
        {
            cout << char(q + 68);
        }

        cout << endl;
    }
}