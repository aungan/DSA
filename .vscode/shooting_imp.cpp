#include<iostream>
#include<algorithm>
using namespace std;
struct can
{
    int dur;
    int pos;
};
int n ;
can a[1000];

bool compare(can a , can b){
    if (a.dur > b.dur)
    {
        return true;
    }
    else
    return false;
}


int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].dur;
        a[i].pos = i+1;
    }
    sort(a , a+n,compare);
    int total_shots = 0;
    for (int i = 0; i < n; i++)
    {
        total_shots += a[i].dur*i + 1;
    }
    cout << total_shots << endl;

    for (int i = 0; i < n; i++)
    {
        cout << a[i].pos << " " ;
    }
}