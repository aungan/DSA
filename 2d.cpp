#include<iostream>
#include<climits>
using namespace std;
int main()
{
    char arr[100];
    cout << "Enter a sentence. Please" << endl;
    cin >> arr;
    int i =0 ;
    int j = 0;
    int count = 0;
    int maxi = INT8_MIN;
    while (arr[i]!='\0')
    {
        while (arr[j]!= ' ')
        {
            count++;
            j++;
        }
        maxi = max(count , maxi);
        i = j;
    }
    cout << maxi << endl;
}