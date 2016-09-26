#include <iostream>
using namespace std;
double f(double a, double b){  // a and b are call by value parameters
    a += 1;
    b += 1;
    return a*a + b*b;
}
double g(double &a, double &b){  // & is the "address of" operator, allows us to change the original value
    a += 1;
    b += 1;
    return a*a + b*b;
}
void inc(int c[], int numItems){ //arrays are always call by reference
    //increment each value of c by one
    for(int i = 1; i < numItems; i++){
        c[i]++;
    }
}
int main() {
    int x[16]; //allocates room for 16 integers
    x[0] = 4;
    double q = 3;
    double r = 4;
    int y[] = {10,20,30,40,50,60,70,80}; //array constant only use when initializing an array
    cout << f(q,r) << endl;
    cout << q << "," << r << endl;
    cout << g(q,r) << endl;
    cout << q << "," << r << endl;
    cout << "Hello, World!" << endl;
    inc(y,8);
    return 0;
}
