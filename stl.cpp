#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

bool f(int x, int y) 
{
    if(x>y) 
    return true;
    else 
    return false;

}


void VectorsDemo()
{
     vector<int> A = {11,2,3,55};
     // cout << A[1]
     sort(A.begin(), A.end());
     bool present = binary_search(A.begin(), A.end() , 3);
     A.push_back(100);

     present = binary_search(A.begin(), A.end(), 100);

     A.push_back(100);
     A.push_back(100);
     A.push_back(123);
     A.push_back(100);
     A.push_back(100);

     for (int i = 0; i < 10; i++)
     {
         cout << A[i] << " ";
     }
     cout << endl;

     

    // finding first occurence of 100
    vector<int>::iterator it = lower_bound(A.begin(),A.end(),100);
    // finding the occurence of the number strictly greater than the one which is mentioned
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); 
    cout << *it << " " << *it2 << endl;
    cout << it2 - it << endl;

    // to sort in descending order 
    sort(A.begin(), A.end(), f);
    // printing the values of the vectors
    //normal way
    //  for(int i =0 ; i <length ; i++){
    //     cout << A[i] << " ";
    // }
    

    //new method 
    vector<int>::iterator it3;
    for (it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout << *it3 << " " ;

    }
    cout << endl;
     

    //another way to print the values of A
    for(int x : A)
    {
        cout << x << " " ;
    }
    cout << endl;
    
    // to make changes to all the values of the vector
    // value of each element will increase by 1
    for(int &y : A)
    {
        y++;
    }
    for(int x :A)
    {
        cout << x << " ";
    }
    cout << endl;
}

void SetsDemo()
{
    set<int> S;
    // sets maintain the values in ascending order as default
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);

    for(int x : S)
    {
       cout << x << " " ;

    }
    cout << endl;
    // checking for an element
    auto it = S.find(-1);
    if (it == S.end())
    {
        cout<< "not present";
    }
    else
    {
        cout << " present at " << *it << endl;
    }

    // similar as vectors but already sorted
    auto it2 = S.lower_bound(-1);
    

    // to erase an element S.erase(-1)
}

void MapsDemo()
{
    map<int,int > A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200 ;
    A[100] = 0;

    //to count how many times a char is repeated in your name

    map<char,int> cnt;
    string x = "aungan purohit";
    for(char c :x)
    {
        cnt[c]++;
    }
    cout << cnt['a'];

    // to find : A.find(key)
    // to delete : A.erase(key)

}

void PowerofSets()
{
    set<pair <int,int>> S;
    S.insert({2,3});
    S.insert({10,30});
    S.insert({401,450});
    S.insert({350,400});
 
    int key = 432;
    auto it = S.upper_bound({key, INT_MAX})
    it--;
    if (it == S.begin())
    {
        cout << "the number is not present " << endl;
    }
    
    pair<int,int> current = *it;
    if (current.first <=key && key <= current.second)
    {
        cout << "the number entered is present at " << current.first << " " << current.second << endl;
    }
    else 
    cout << "number not present " << endl;
    

}

int main()
{
    MapsDemo();

}