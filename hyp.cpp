#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double a, b, total ;

   cout << "Input numbers: " << endl;
   cin >> a >> b ;
   total = sqrt(pow(a, 2.0) + pow(b, 2.0)) ;
   cout << "The hypotenuse is: " << total << endl;
   return 0;
}
