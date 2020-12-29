#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n , m;
    cin >> n >> m;
    int dif = n - m;
    if (m==0 || m==1)
    {
        cout << 1 << endl;
    }
    else if (m == n)
    {
        cout << 0 << endl;
    }
    
    else if(dif+ m == n)
    {

        cout << min(dif,m) << endl;
    }
}