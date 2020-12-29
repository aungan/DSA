#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = 2*n;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int max = 0;
    int sum = 0 ;
    for (int i = 0; i < m; i+=2 )
    {
        sum = a[i] + a[i+1];
        if (sum > max)
        {
            max = sum;
        }
        
    }
    cout << max << endl;
}