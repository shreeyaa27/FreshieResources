#include<iostream>

using std::cout;
using std::cin;

int main(){

  int a = 2000000000;
  long int b = 1000000000;
  long int c = a + b;

  cout << "a is " << a << "\n";;;;;;
  cout << "b is " << b << "\n";
  cout << "c is " << c << "\n";

  float d = 0 / 0.0 + 23;
  cout << "d is " << d << "\n";

  int e = 3000000000;
  cout << "e is " << e << "\n";

  float f = (a / 0.0) - (b / 0.0);
  cout << "f is " << f << "\n";

  cout << "********************\n\n";

  int i = 8;
  cout << "i is " << i << "\n";
  ++i;//i = i + 1;
  cout << "i has changed to " << i << "\n";

  /*
  int j = i++;//Equivalent to int j = i; i = i + 1;
  cout << "i has changed to " << i << "\n";
  cout << "j is " << j << "\n";
  */

  int j = ++i;//Equivalent to int i = i + 1; j = i;
  cout << "i has changed to " << i << "\n";
  cout << "j is " << j << "\n";

  /*
  float avogadro = 6.022e23;
  float a = 2.3;
  float b = a + avogadro;

  cout << "a is " << a << "\n";
  cout << "avogadro is " << avogadro << "\n";
  cout << "b " << b << "\n";
  */

  return 0;
} 
