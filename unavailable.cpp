#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a ,b , c , r;
        int left , left2;
        cin >> a >> b >> c >> r;
        int dis = b - a;
        int temp;
        
        
        if (a > b )
        {
            dis = a- b;
            temp = a;
            a = b;
            b = temp;
        } 
        if (c==a || c==b)
        {
            if (r > dis)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << dis - r << endl;
            }
        }   
        if (c < a)
        {
            left = a - c;
            if (r>=left)
            {
                if(r > dis)
                cout << dis - (r - left) << endl;
                else
                cout << 0 << endl;
            }
            else
            {
                cout << dis << endl;
            }
        }
        else if (c > b)
        {
            left = c - b;
            if (r >= left)
            {
                if(r < dis)
                cout << dis - (r - left) << endl ;
                else
                cout << 0 << endl;
                
            }
            else
            {
                cout << dis << endl;
            }
        }
        else
        {
            left = c - r ;
            left2 = (c + r) ;
            int total = left2 - left;
            cout << dis - total << endl;       
        }
    }
}