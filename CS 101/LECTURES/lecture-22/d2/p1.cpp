#include <simplecpp>

#define GRAV 9.81

#define TEXT "This is a string."

#define b5 c5

#define VAL 3 + 5

#define print cout <<

#ifndef repeat
#define repeat(n) int i = 0; while(i++ < n)
#endif

//Declaration/prototype of func
int func(int);


main_program{

  float mass = 10;
  float force = mass * GRAV;
  
  cout << "force: " << force << "\n";
  cout << TEXT << "\n";
  cout << 'trial' << "\n";

  double b5 = 0;
  cout << c5 << "\n";

  cout << VAL * 3 << "\n";

  repeat(5){
    print func(3) << "\n";
  }

}

