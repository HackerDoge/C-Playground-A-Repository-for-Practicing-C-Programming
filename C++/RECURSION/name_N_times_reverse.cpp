#include<iostream>
using namespace std;

/* PRINT NAME FOR N TIME IN REVERSE ORDER USING RECURSION */

void printNAme(int a, int n)
{
    if (a<1)
        return;
    
    else
        cout<<a<<endl;
        printNAme(a-1,n);
}

int main ()
{
    int n;
    cout<<"Enter the Number of times:"<<endl;
    cin>> n;
   
    cout<<endl;

    printNAme(n,n);

}