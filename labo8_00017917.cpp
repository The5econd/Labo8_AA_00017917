// Example program
#include <iostream>
#include <string>
using namespace std;



void Activity(int S[], int F[], int n){
    int temp = 0;
    cout<<temp<<" ";
    
    for(int i = 1; i < n; i++){
        if (S[i] >= F[temp]){
            cout<<i<<" ";
            temp = i;
        }    
    }
}


int main()
{
  int S[6] = {0, 1, 0, 3, 4, 3};
  int F[6] = {1, 3, 6, 4, 5, 10};
  int n = 6;
  Activity(S, F, n);
}
