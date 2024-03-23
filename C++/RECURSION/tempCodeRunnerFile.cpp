#include<iostream>
using namespace std;

/* PRINT NAME FOR N TIME USING RECURSION BACKTRACKING*/

void printNAme(int a, int n)
{
    if (a<1)
        return;
    
    else
        printNAme(a-1,n);
        cout<<a<<endl;
}

int main ()
{
    int n;
    cout<<"Enter the Number of times:"<<endl;
    cin>> n;
   
    cout<<endl;

    printNAme(n,n);

}