#include <iostream>

using std::cin;
using std::cout;

int main(){

  double cr, ci;
  int n;
  cin >> cr >> ci >> n;

  double zr = 0;
  double zi = 0;

  for(int i = 1; i <= n; i++){
    double newzr = (zr * zr) - (zi * zi) + cr;
    double newzi = (2.0 * zr * zi) + ci;

    zr = newzr;
    zi = newzi;
  }

  cout << zr << " " << zi << "\n";

  return 0;
}

