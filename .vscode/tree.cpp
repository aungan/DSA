#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m = sizeof(a)/sizeof(a[0]);
    sort(a , a +m);
    long long x=0 , y=0 ;
    for (int i = n-1 ; i >= 0; i--)
    {
        if(i >= n/2)
        x = x + a[i]; 
        else
        y = y + a[i];
    }
    long long answer = pow(x,2) + pow(y,2);
    cout << answer << endl;
}