#include <iostream>

#define AAA BBB

//using namespace std;

//Global variable
int m = 8;
double PI = 3.14159;

namespace shivaram{
  int cout = 67;

  bool sign(double x){
    return (x >= 0);
  }

  namespace insideshivaram{
    int cout = 55;
  }
  
}

void temp(){

  //  namespace insidetemp{
  //    int xyz;
  //  }
  
  PI = -4;
}

using namespace std;
//using namespace shivaram;

struct Point{
  double x, y, z;
  Point(){
    x = 0;
    y = 0;
    z = 0;
  }
  
  Point(float a, float b, double c){
    x = a;
    y = b;
    z = c;
    cout << "Inside float\n";
  }
  Point(double a, double b, double c){
    x = a;
    y = b;
    z = c;
    cout << "Inside double\n";
  }
  
  void initialise(){
    x = 0;
    y = 0;
    z = 0;
  }
  void print(){
    cout << "[" << x << ", " << y << ", " << z << "]\n";
  }
};
  


int main(){

    using namespace std;
  
  /*
  int n = 5;
  cout << "n = " << n << "\n";
  cout << "m = " << m << "\n";
  m = 7;
  std::cout << "m = " << m << "\n";
  std::cout << "PI = " << PI << "\n";
  temp();
  std::cout << "PI = " << PI << "\n";

  std::cout << "cout is " << shivaram::cout << "\n";
  std::cout << "Inside cout is " << shivaram::insideshivaram::cout << "\n";
  std::cout << "sign(45) is " << shivaram::sign(45) << "\n";

  int m = 12;
  std::cout << "m = " << m << "\n";
  std::cout << "Global m = " << ::m << "\n";
  */

  Point p;
  //  p.initialise();//User has to write this line
  p.print();

  Point q(2.3f, -4.0f, 6.6f);
  q.print();

  //  Point r(0, 1, 2, 3);

  cout << " AAA ";
  return 0;
}
