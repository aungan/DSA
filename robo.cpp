#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n] , b [n] , c[n];
    int count = 0 , counta=0 ;
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
        if (b[i]==1)
        {
            count++;
        }
        
    }
    int flag =0;
    int  count2 =0,count3 = 0 ;
    int num =1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
           flag = 1; 
           break;
        }
    }
    
    if(flag == 1)
    {
        for (int i = 0; i < n; i++)
        { 
            if (b[i]==1 && a[i]==1)
            {
                count2++;
            }
            count3 = counta - count2;
        }
        while(count2 + count3*num <=  count)
        {
            num++;
        }
        cout << num << endl;
    }
    else
    cout << -1 << endl;
}