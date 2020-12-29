#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int a[n];
    int x = 0;    
   
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i] +x;
        x = max(a[i],x);
        cout << a[i] << " ";
    }
}