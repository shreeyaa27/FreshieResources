#include <iostream>
using std::cout;
using std::cin;

int main(){

  /*
  int _xyz = 34;
  char cc = 'e';
  char pressure = 23.091036667787;

  cout << "_xyz variable has value " << _xyz << "\n";
  cout << "cc variable has value " << cc << "\n";
  cout << "pressure variable has value " << pressure << "\n";
  */

  double c = 3e8;

  cout << "Enter mass in kg: ";
  double m;
  cin >> m;
  double E = m * c * c;//pow(c, 10)

  cout << "The energy equivalent is: " << E << "\n";

  return 0; 
}
