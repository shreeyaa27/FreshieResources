#include <iostream>
using std::cout;
using std::cin;

int main(){

  /*
 float temperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperaturetemperature = 37.15;
  unsigned int age = 56;
  char gender = 'f';
  
  char h = '1';
  char f = 97;

  //  cout << "temperature variable has value " << temperature << "\n";
  cout << "age variable has value " << age << "\n";
  cout << "gender variable has value " << gender << "\n";
  cout << "f variable has value " << f << "\n";
  */

  double force;
  const double g = 9.81;
  double mass;
  cout << "Enter mass in kg: ";
  cin >> mass;
  force = mass * g;

  cout << "If your mass is " << mass << ", then, when you fall down in free fall, the force acting on you is " << force << "N.\n";

  return 0; 
}
