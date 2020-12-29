#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3] , b[3];
        int count = 0;
        int i;
        int max = i;
        int prev = i;
        int max_ele = 0;

        for ( i = 0; i < 3; i++)
        {
            cin >> a[i];
            b[i] = a[i] -1 ;

        }
        for ( i = 0; i < 3; i++)
        {
            if (b[i] >= 0 )
            {
                count++;
            }
        }
        int n = sizeof(b)/sizeof(b[0]);
        sort(b , b+n);
        if (b[1]>0 && b[2]>0)
        {
            count++;
            b[1] = b[1] - 1;
            b[2] = b[2] - 1;
        }
        if (b[0]>0 && b[1]>0)
        {
            count++;
            b[0] = b[0] -1;
            b[1] = b[1] -1;
        }
        
        if (b[0]>0 && b[2]>0)
        {
            count++;
            b[0] = b[0] - 1;
            b[2] = b[2] -1;
        }
        if (b[0]>0 && b[1]>0 && b[2]>0)
        {
            count++;
        }
        cout << count << endl;
    }
}