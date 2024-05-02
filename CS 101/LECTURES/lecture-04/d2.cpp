#include <simplecpp>

main_program{

  unsigned int n;

  cout << "Enter the number of terms to print: ";
  cin >> n;

  int a = 0;
  int b = 1;
  
  cout << a << ", ";
  cout << b << ", ";
  
  int c;

  repeat(n - 2){

    c = a + b;
    cout << c << ", ";

    a = b;
    b = c;
  }


  /*
  int x, y, z;

  x = 20;
  y = 7;
  z = x / y;
  cout << "z has value " << z << "\n";

  cout << x << "/" << y << " has value " << x / 7.0 << "\n";

  int w = x % y;
  cout << "w has value " << w << "\n";

  float v = 40.0 / 3;

  cout << "v has value " << v << "\n";
  */

  /*
  const long double pi = 3.1415926535897933;

  x = -4;

  y = 2 * x + 45;

  cout << "x has value " << x << "\n";
  cout << "y has value " << y << "\n";

  x = x + 6;
  cout << "x now has value " << x << "\n";

  y = y + x + 3;
  cout << "y has value " << y << "\n";

  
  x = 3;
  y = 5;
  float d = sin(2);
 
  // y = 2 * (x = -4) + 2;
  cout << "x has value " << x << "\n";
  cout << "y has value " << y << "\n";
  cout << "d has value " << d << "\n";
  */
}
