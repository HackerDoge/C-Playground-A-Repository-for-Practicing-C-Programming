#include<iostream>
#include<math.h>
using namespace std;

//Take two numbers and print its sum using functions!

int sum(int num1, int num2){
    int num3=num1+num2;
    return num3;
}

int main(){
    int num1,num2;
    cout<<"Enter the First Numbers: "<<endl;
    cin>>num1;
    cout<<"Enter the First Numbers: "<<endl;
    cin>>num2;
    int res=sum(num1,num2);
    cout<<"The Result is: "<<res<<endl;
    int minu=min(num1,num2);
    cout<<"The Minimum is: "<<minu<<endl;
    return 0;
}