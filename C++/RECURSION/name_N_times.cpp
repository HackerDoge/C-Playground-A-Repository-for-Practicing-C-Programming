#include<iostream>
using namespace std;

/* PRINT NAME FOR N TIME USING RECURSION */

void printNAme(int a, int n, string b)
{
    if (a>n)
        return;
    
    else
        cout<<b<<endl;
        printNAme(a+1,n,b);
}

int main ()
{
    int n;
    string b;
    cout<<"Enter the Number of times:"<<endl;
    cin>> n;
    cout<<"Enter you Name:"<<endl;
    cin>> b;
    cout<<endl;

    printNAme(1,n,b);

}