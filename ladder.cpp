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
        long long n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a , a+n);
        int max = a[n-2] -1 ;
        int left = n -2 ;
        if (max == 0)
        {
            cout << 0 << endl;
        }
        
        else if (left >= max)
        {
            cout << max << endl;
        }
        
        else
        {
            cout << left << endl;
        }
    }
}