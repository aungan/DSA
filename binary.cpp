#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b , c , d , time_left, rem, x, answer ;
        cin >> a >> b >> c >> d;
        if (b>=a)
        {
            cout << b << endl;
        }
        else
        {
            time_left = a-b;
            if (c <= d)
            {
                cout << -1 << endl;
            }
            else
            {
                x = c-d;
                rem = time_left % x;
                if (rem == 0)
                {
                    answer = time_left/x;
                    cout << b + answer*c << endl;
                }
                else
                {
                    answer = time_left/x + 1;
                    cout << b + answer*c << endl; 
                }
            }
        }
    }
    
}