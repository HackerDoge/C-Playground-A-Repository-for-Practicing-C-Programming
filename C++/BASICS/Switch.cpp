#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int day;
    cout<<"Enter the date: "<<endl;
    cin>> day;

    switch (day)
    {
    case 1:
        cout<< "Monday";
        break;
    case 2:
        cout<< "Tuesday";
        break;
    case 3:
        cout<< "Wednesday";
        break;
    case 4:
        cout<< "Thrusday";
        break;
    case 5:
        cout<< "Friday";
        break;
    case 6:
        cout<< "Satday";
        break;
    case 7:
        cout<< "Sunday";
        break;                
    default:
        cout<< "Invaild Data!!put data from 1-7";
        break;
    }
}