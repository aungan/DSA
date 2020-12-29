#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int x ,y;
    cin >> x >> y;
    int n;
    cin >> n;
    int m = n*3;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    long double min = pow(10,7) ;
    for (int i = 0; i < m; i+=3)
    {
        //cout << a[i] << " " << a[i+1] << " " << a[i+2] << endl;
        long double dis = sqrt(pow((a[i]-x),2) + pow((a[i+1]-y),2));
        long double time = dis/a[i+2];
        //cout << dis << time << endl;
        
        if (min > time )
        {
            min = time;
        }
        //cout << min << endl;
        
    }
    cout << setprecision(20) << min << endl;
}