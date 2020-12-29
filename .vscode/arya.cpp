#include<iostream>
using namespace std;
int main()
{
    int n , k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int left = 0 , sum = 0 , count = 0 , flag =0 ;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 8)
        {
            sum = sum + a[i];
            count++;
            if (sum >=k)
            {
                flag = 1;
                break;
            }
            
        }
        else
        {
            left = a[i] - 8;
            a[i+1] = a[i+1] + left;
            sum = sum + 8;
            count++;
            if (sum >= k)
            {
                flag = 1;
                break;
            }
            
        }
        
    }
    if (flag==1)
    {
        cout << count << endl;
    }
    else
    cout << -1 << endl;
}