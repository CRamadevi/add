#include <iostream>
using namespace std;

int main(){
  int squareroot = 0;
  int number;

  cout << "enter a number sp that i can calculate its squareroot" << endl;

  cin >> number;

  while (squareroot * squareroot != number){

      squareroot+=0.1;

}
cout << "the square root is" << squareroot << endl;
return 0;
 }
