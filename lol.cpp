#include <bits/stdc++.h>
#include<string>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q){
    long long num;
    int length ,total , right , left;
    string n ,r,l;
    for (long long i =p; i<=q; i++) {
        num = i*i;
        n = to_string(num);
        length = n.length();
        if (length == 1)
        {
            total = num;
        }
        else{
        
        l = n.substr(0,length/2);
        r = n.substr(length/2);
        right = stoll(r);
        left = stoll(l);
        total = right + left;
        }
        if (total == i) {
            cout << i << " ";
        }
        
    }


}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
