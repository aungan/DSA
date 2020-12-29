#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int binary(int n)
{
    int ans = 0;
    int x = 1;
    while (n>0)
    {
        int y = n%10;
        ans += x * y;
        x *= 2;
        n /=10;
    }
    return ans;
    
}

int hexadecimal(string num)
{
    int answer =0;
    int x = 1;
    int s = num.size();
    for (int i = s-1; i >=0; i--)
    {
        if (num[i]>= '0' && num[i]<= '9')
        {
            answer = x* (num[i] - '0');
        }
        else if (num[i] >= 'A' && num[i] < 'F')
        {
            answer = x * (num[i] - 'A' +10);
        }
        x*=16
    }
    return answer;
}

int main()
{
    string num;
    cin >> num;
    cout << hexadecimal(num) << endl;
}