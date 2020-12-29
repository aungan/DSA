#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long double x  ;
        int k = 1 ;
        do
        {
            k++;
            x = n/(pow(2,k)-1);
        } while (floor(x) != x);
         

        cout << int(x) << endl;
    }
}