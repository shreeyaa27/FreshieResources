#include <iostream>

//using std::cout;
//using namespace std;

//Global variables
double x = 3.45;
char y = 'F';


namespace shivaram{

  int cout;
  int f(int b){
    return b + 2;
  }
}

using namespace shivaram;

double scale(int c){
  double p = x * c;
  ::x = -1;
  return p;
}

struct Point{

  double x, y, z;

  
  //Run by default
  Point(){
    x = -1;
    y = 0;
    z = 0;
    std::cout << "Inside constructor\n";
  }

  Point(double a, double b, double c){
    x = a;
    y = b;
    z = c;
  }
  
  void initialise(){
    x = 0;
    y = 0;
    z = 0;
  }
  
  void print(){
    std::cout << "(" << x << ", " << y << ", " << z << ")\n";
  }
    
};
  

int main(){

  /*
  int n = 5;
  std::cout << "Hello\n";
  std::cout << "scale(4) = " << scale(4) << "\n";
  std::cout << "n = " << n << "\n";
  std::cout << "x = " << x << "\n";
  std::cout << "y = " << y << "\n";

  shivaram::cout = 5;//cout from shivaram
  std::cout << "shivaram::cout is " << shivaram::cout << "\n";//cout from shivaram

  double x = 300.5;
  std::cout << "x = " << x << "\n";
  std::cout << "Global x = " << ::x << "\n";
  */

  Point p;
  //p.initialise();
  p.print();

  Point q(-5, -6, -7);
  q.print();

  //  Point r(1, 2);
  //  r.print();
}
