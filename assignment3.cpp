#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    int p=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << char(k+64);
        }
        for(int q=1;q<=i-1;q++)
        {
          cout<<char(q+65);
        }
        cout << endl;
    }
}