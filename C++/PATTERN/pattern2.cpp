#include<iostream>
using namespace std;

/* PRINT THE PATTERN:
   1
   12
   123
   1234
 */

void pattern(int n){
int i,j;

for(i=1;i<n;i++) {

    for(j=1;j<i;j++) {

        cout<<j;
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