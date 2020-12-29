#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int a[n]; 
    a[0] = b[0];
    long long sum = a[0];
    
    for (int i = 1; i < n; i++)
    {
        a[i] = sum + b[i];
        if(a[i] == 0)
        sum = a[i-1];
        else 
        sum = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}