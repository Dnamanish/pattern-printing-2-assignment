#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter value of n:";
    cin>>n;
    m=n-1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
}