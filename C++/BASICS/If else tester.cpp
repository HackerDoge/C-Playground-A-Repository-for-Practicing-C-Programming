#include<iostream>
#include<math.h>
using namespace std;

 int main(){

    int marks;
    cout<<"Enter the Marks: "<<endl;
    cin>>marks;
    if (marks<25){
        cout<<"your grade is F"<<endl;
    }
    else if (marks>25 && marks<44){
        cout<<"your grade is E"<<endl;
    }
    else if (marks<45 && marks<49){
        cout<<"your grade is D"<<endl;
    }
    else if (marks<50 && marks<59){
        cout<<"your grade is C"<<endl;
    }
    else if (marks<60 && marks<79){
        cout<<"your grade is B"<<endl;
    }
    else if (marks<80 && marks<100){
        cout<<"your grade is A"<<endl;
    }
    else{
        cout<<"INVALID DATA!!Enter a Grade within 0-100 system"<<endl;
    }

 }