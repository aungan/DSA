#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n] , b [n] , c[n], d[n];
    int count = 0 ,count2=0 ,flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        d[i] = c[i] - b[i];
        if (d[i]==1)
        {
            count2++;
            flag = 1;
        }
        else
        {
            count++;
        }
    }
    if (flag==1)
    {
        while ()
        {
            /* code */
        }
        
    }
    

}