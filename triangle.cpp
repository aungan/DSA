#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int a[4] , b[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    int n = sizeof(a)/sizeof(a[0]);
    sort(a , a+n );
    if (a[1] + a[2] > a[3] || a[0] + a[1] > a[2])
    {
        cout << "TRIANGLE" << endl;
    }
    else if (a[0]+a[1]==a[2] || a[1] + a[2] == a[3])
    {
        cout << "SEGMENT" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}