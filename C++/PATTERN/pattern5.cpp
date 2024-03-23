/*
#include<iostream>
using namespace std;

/* PRINT THE PATTERN:
   *****
   ****
   ***
   **
   *
 

void pattern(int n){
  int i,j;
  for(i=1;i<=n;i++){
    for(j=1;j>i;j++){
        cout<<j;
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
*/

#include <bits/stdc++.h>
using namespace std;

void pattern5(int N)
{
   
    for (int i = 0; i < N; i++)
    {
        for (int j =N; j>i; j--)
        {
            cout <<"* ";
        }
       
      
        cout << endl;
    }
}

int main()
{   
   
    int N = 5;

    pattern5(N);

    return 0;
}