#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n , k ;
        cin >> n >> k;
        if (k >= n)
        {
            cout << k - n << endl;
        }
        else    
        {
            if (k == 0 && n != 1)
            {
                cout << 0 << endl;
            }
            else if (k ==0 && n==1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << n;
            }
            
            
            
            
        }
        

        
        


    }
    
}