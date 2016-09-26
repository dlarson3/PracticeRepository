#include <iostream>
#include <math.h>
using namespace std;

void main(){
  cout << "Please enter a number:";
  cin >> n;
}

int fact(int n){
  // n must be non negative
  if (n == 0){ // base case
    return 1;
  }
  else{
    return n * fact(n-1);
  }
  cout << 
}
