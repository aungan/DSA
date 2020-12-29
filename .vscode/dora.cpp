#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n , x;
        cin >> n >> x ;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int diff;
        sort(a , a+n);
        for (int i = 0; i < n-1; i++)
        {
           diff = a[i+1] - a[i] -1 ;
           if (diff < 0 )
           {
               continue;
           }
           else if (diff>=x)
           {
               cout << a[i] + diff +1   << endl;
               break;
           }
           else if (diff < x)
           {
               x = x -diff ;
               continue;
           }
        }
    }
}