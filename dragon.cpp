#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x , n , m , flag =0 , flag2 = 0;
        cin >> x >> n >> m;

        if (x <=10 && m>=1)
        {
            cout << "YES" <<endl;
        }
        else
        {        
        for (int i = 0; i < n; i++)
            {
                x = floor(x/2) + 10 ;
                if (x <= 0 )
                {
                    flag = 1;
                    break;
                }
            } 
        
        if (flag == 1)
        {
            cout << "YES"<< endl;
        }
        else
        {
           for (int i = 0; i < m; i++)
            {
                x = x - 10;
                if (x <= 0)
                {
                    flag2 = 1;
                    break;
                }
            }
            if (flag2==1)
            {
                cout << "YES" <<endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
        }
        
    }
}