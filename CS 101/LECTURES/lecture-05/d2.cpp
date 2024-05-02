#include <iostream>

using std::cout;
using std::cin;

int main(){

  int s = 6;
  s += 4;
  cout << "s is " << s << "\n";
  s *= 12;
  cout << "s is " << s << "\n";

  /*
  int i = 90;
  cout << "i is " << i << "\n";
  ++i;
  cout << "i is now " << i << "\n";

  int a = 5;
  int b = a++;//Equivalent to b = a; a = a + 1;

  int a1 = 5;
  int b1 = ++a1;//Equivalent to a = a + 1; b = a;
  */

  /*
  //a = 6; b = 5.
  int c = (a++ * b) + (a * b);
  cout << "c is " << c << "\n";

  cout << "a is " << a << "\n";
  cout << "b is " << b << "\n";

  cout << "a1 is " << a1 << "\n";
  cout << "b1 is " << b1 << "\n";
  */

  /*
  float a = -56.7;
  float b = 0;
  float c = a / b;
  float d = 0;
  float e = d / b;
  float f = 0 % 0;

  cout << "a is " << a << "\n";
  cout << "b is " << b << "\n";
  cout << "c is " << c << "\n";
  cout << "e is " << e << "\n";
  cout << "f is " << f << "\n";
  */

  /*
  int a = 2000000000;
  int b = 4000000000;

  long int c = a + b;

  cout << "a is " << a << "\n";
  cout << "b is " << b << "\n";
  cout << "c is " << c << "\n";

  cout << "a + b is " << (a + b) << "\n";
  */

  return 0;
}
