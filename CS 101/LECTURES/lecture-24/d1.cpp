#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;

struct Point{

private:  //Access control level
  double x, y, z;

public://Access control level
  /*
  Point(){
    x = 0;
    y = 0;
    z = 0;
    cout << "Inside Constructor 1\n";
  }
  */
  Point(): x(0), y(0), z(0){
    cout << "Inside Constructor 1\n";
  }
  
  /*  Point(double a, double b, double c){
    x = a;
    y = b;
    z = c;
    cout << "Inside Constructor 2\n";
  }
  */
  Point(double a, double b, double c): x(a), y(b), z(c){
    cout << "Inside Constructor 2\n";
  }

  void print(){
    cout << "(" << x << ", " << y << ", " << z << ")\n";
  }

  Point operator+(Point p){
    Point q(x + p.x, y + p.y, z + p.z);
    return q;
  }

};

  
int main(){

  /*
  Point p;
  cout << "P: ";
  p.print();
  Point q(1, 2, 3);

  //  p.x = 3;
  //  p.y = 4;
  //  p.z = 8;
  cout << "P: ";
  p.print();

  cout << "Q: ";
  q.print();

  cout << "P + Q: ";
  Point r = p + q + (p + p + q);
  r.print();

  cout << "p + q: ";
  Point f = p + q;
  f.print();

  cout << "p.operator+(q): ";
  Point g = p.operator+(q);
  g.print();

  cout << "p.operator+(p): ";
  Point h = p.operator+(p);
  h.print();
  */

  ifstream inputFile("input-d1.txt");
  ofstream outputFile("output-d1.txt");
  char c;
  while(inputFile >> c){
    outputFile << c << c << "\n";
  }
  
}
