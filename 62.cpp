#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin >> t ;
    while (t--)
    {
        int n , count_2 =0 , count_3 = 0;
        //count_2 = a-b
        // count_3 = a
        cin >> n;
        while (n%2 == 0 )
        {
            count_2++;
            n = n/2;
        }
        while (n%3 == 0)
        {
            count_3++;
            n = n/3;
        }
        //cout << n << endl; 

        if(n != 1)
        cout << -1 << endl;
    
        else if (count_3 - count_2 >= 0 )
        {
            
            cout << count_3 + (count_3 - count_2) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    
}