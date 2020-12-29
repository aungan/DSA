#include<iostream>
#include<cmath>
using namespace std;
int main()

{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b , c , r , dmin , dmax;
        cin >> a >> b >> c >> r;
        int x = a;
        a= min(a, b);
        b = max(x,b);
        dmin = c - r;
        dmax = c+ r;
        if (dmax < a)
        {
            cout << b-a << endl;

        }
        else if (dmin > b)
        {
            cout << b-a << endl;
        }
        else if (dmin >= a && dmax<=b)
        {
            cout << b-a - (dmax -dmin) <<endl;
        }
        else if (dmin <=a && dmax <=b)
        {
            cout << 0 << endl;
        }
        else if (dmin >=a && dmax >=b)
        {
            cout << dmin -a << endl;
        }
        else if (dmin <=a && dmax <=b)
        {
            cout << b- dmax << endl;
        }
    }        
}
