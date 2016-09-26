#include <iostream>
#include <cmath>
using namespace std;

//int main()
//{
//  double a, b, total ;
//
//   cout << "Input numbers: " << endl;
//   cin >> a >> b ;
//   total = sqrt(pow(a, 2.0) + pow(b, 2.0)) ;
//   cout << "The hypotenuse is: " << total << endl;
//   return 0;
//}
int main(){
  int myvector[]; // initilizes an empty vector.
  int length;
  int search;

  cout << "Please enter some integers (enter 0 to end):\n";

  do {
    cin >> myint;
    myvector.push_back (myint);
  } while (myint);

  cout << "myvector stores " << (int) myvector.size() << " numbers.\n";

  return 0;
  //int vv[2] = { 12,43 };
  //std::vector<int> v(&vv[0], &vv[0]+2);
  int searchNum;
  cout << "Input vector and then search number" << endl;
  cin >> myvector >> searchNum;
  for(int i=0; i<myvector.length(); i++){
    if(myvector[i]==searchNum){
      int answer = i+1;
      return(i+1);
//  return 0;
      cout << "The search number is in this position:" << answer << endl;
    }
  }
  int answer = -1;
  cout << "The search number is in this position:" << answer << endl;
  return(-1);
}  
//int findLinear(IntegerVector v, int searchNum){
//  for(int i=0; i<v.length(); i++){
//    if(v[i]==searchNum){
//      answer = i+1;
//      return(i+1);
//      cout << "The search number is in this position:" << answer << endl;
//    }
//  }
//  answer = -1;
//  cout << "The search number is in this position:" << answer << endl;
//  return(-1);
//}
