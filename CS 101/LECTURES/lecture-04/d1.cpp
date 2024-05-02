#include <simplecpp>

main_program{

  //Fibonacci code
  cout << "Enter n: ";
  int n;
  cin >> n;

  int first = 0;
  int second = 1;
  
  cout << first << "\n";
  cout << second << "\n";

  repeat(n - 2){

    int next;
    next = first + second;
    cout << next << "\n";

    first = second;
    second = next;
  }


  /*  int a;
  int b;

  a = 23;
  b = 4;
  float c = a / b;

  int d = a % b;
  float e = 13.0 % 3.0;

  cout << "c has value " << c << "\n";
  cout << "d has value " << d << "\n";
  cout << "e has value " << e << "\n";
  //  cout << "a / b has value " << (a / b) << "\n";
  */

  /*
  int x, y;
  x = 5;
  y = x + (x * x) + 7;

  cout << "x initially has value " << x << "\n";
  cout << "y initially has value " << y << "\n";

  x = x + 10;
  y = x + (x * 2) + 1;

  cout << "x now has value " << x << "\n";
  cout << "y now has value " << y << "\n";

  x = x;
  cout << "x finally has value " << x << "\n";
  */

}
