#include<iostream>
using namespace std;
int main()
{
    int n , l , r;
    cin >> n >> l >> r;
    int a[n] , b[n]; 

    for (int i = 0; i < n; i++)
    {
        if (i <= n-l)
        {
            a[i] = 1;
        }
        else
        {
        a[i] = 2 * a[i-1];
        }
    }
    int sum_min = 0;
    for (int i = 0; i < n; i++)
    {
        sum_min = sum_min + a[i];
    }

    b[0] = 1;
    r = r-1;

    for (int  i = 0; i < n; i++)
    {
        if (i == 0)
        {
            continue;
        }
        
        else if (r > 0)
        {
            b[i] = 2 * b[i-1];
            r--;
        }
        else
        {
            b[i] = b[i-1];
        }
    }
    int sum_max =0;
    for (int i = 0; i < n; i++)
    {
       sum_max += b[i];
    }
    
    cout << sum_min << " " << sum_max ;
}