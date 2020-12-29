#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if ((a+1)==b)
    {
        cout << a << 99 << " " << b << "00" ;
    }
    else if (a == b)
    {
        cout << a << 12 << " " << b << 13 ;
    } 
    else if(a == 9 && b==1)
    {
        cout << 9 << " "<< 10;
    }
    else
    {
        cout << -1;
    }
    
}