#include<iostream>
#include<math.h>
using namespace std;

 int main(){
    string s= "Striver";
    int len= s.size();
    s[len-1]= 'z';
    cout<< s[len-1]<<endl;
    cout<< s;
    return 0;
 }