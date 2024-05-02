#include <simplecpp>

#ifndef PI
#define PI
#endif

#define m5 10

int f(int a);//Declaration/prototype of f

main_program{

  //const double MY_PI = 3.14159;
  
  //  cout << "Hello.\n";
  float radius = 2.0;
  float area = PI * radius * radius;
  cout << "Area is " << area << "\n";
  cout << m5 << "\n";
  cout << "f(5) = " << f(5) << "\n";

}

/*
int f(int a){

  return a + 1;
}
*/
