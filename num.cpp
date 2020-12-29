#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        if (n%2 ==0)
        {
            count = n/2;
            while (count--)
            {
                cout << 1;
            }
            cout << endl;
            
        }
        else
        {
            count = (n-3)/2;
            cout<< 7;
            while (count--)
            {
                cout<<1;
            }
            cout << endl;
            
        }
    }
}