#include<iostream>
using namespace std;

/* PRINT THE PATTERN:
    *
    **
    ***
    ****
 */

void pattern(int n){
int i,j;

for(i=0;i<n;i++) {

    for(j=0;j<i;j++) {

        cout<<"*";
    }

    cout<<endl;
}

}

int main(){
    int n;
    cout<<"Enter Your Choice: "<<endl;
    cin>>n;

    pattern(n);

    return 0;
}