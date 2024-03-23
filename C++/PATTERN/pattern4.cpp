#include<iostream>
using namespace std;

/* PRINT THE PATTERN:
   1
   22
   333
   4444
 */

void pattern(int n){
int i,j;

for(i=0;i<n;i++) {

    for(j=0;j<i;j++) {

        cout<<i;
    }

    cout<<endl;
}

}

int main(){
    int n;
    cout<<"Enter Your Choice(In N+1 Format): "<<endl;
    cin>>n;

    pattern(n);

    return 0;
}