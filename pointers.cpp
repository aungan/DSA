#include<iostream>
using namespace std;
int main()
{
    int age =19;
    double gpa =2.7;
    string name = "Aungan";
    double *pgpa = &gpa;

    cout << pgpa<< endl;
    cout << *pgpa;

}