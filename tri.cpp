#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int len;
        cin >> len;
        string num;
        cin >> num;
        bool a = 0; 
        int even = 0; 
           

        if (num.size()%2 == 0)
        {
            
            for (int i = 1; i<len; i+=2 )
            {
                
                if ((num[i] - '0')%2 == 0)
                {
                    a = 0;
                    even = 1;
                    break;
                }
                
            }
            
            if(even == 1)
            {
                a =0;
            }
            else
            {
                a = 1;
            }
            
            
        }
        else
        {
            
            for (int  i = 0; i < len ; i+=2)
            {
                if ((num[i] - '0')%2 == 1)
                {
                    a = 1;
                    break;
                }
            }
        }
        
        if (!a)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}