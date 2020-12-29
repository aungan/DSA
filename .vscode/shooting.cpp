#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s = sizeof(a)/sizeof(a[0]);
    sort(a , a+s);
    int sum  ;
    int total =0 ;
    int k = 0;
    for (int i = n-1; i>=0 ;i--)
    {
        sum = a[i]*k + 1;
        total = total + sum;
        k++;
    }
    cout << total << endl;
    
    
    
}