#include<iostream>
using namespace std;

/* PRINT SUM OF N USING RECURSION */

void suma(int a, int b)
{
    if (a<1)
        cout<<b;
        return ;
    suma(a-1,b+a);
    
}

int main ()
{
    int n;
    cout<<"Enter the Number:"<<endl;
    cin>> n;
   
    cout<<endl;

    suma(n,0);

}