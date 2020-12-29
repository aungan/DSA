#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i <n ; i++)
    {
        cin >> a[i];
    }
    vector<int> A;
    for (int i = 0; i < n; i++)
    {
        A.push_back(a[i]);
    }
    int x;
    cin >> x;
    int min = *min_element(A.begin(), A.end());
    cout << min << endl;

    
    
}