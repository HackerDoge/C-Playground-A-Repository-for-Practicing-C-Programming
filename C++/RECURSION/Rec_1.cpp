#include<iostream>
using namespace std;


int f(c)
{
    
    if (c==6)
     return;

    cout<<count<<endl;

    count++;
    
    f(c);
}

int main()
{
    
int c=0;

f(c);

}