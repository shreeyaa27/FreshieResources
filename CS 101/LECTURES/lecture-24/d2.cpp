#include <iostream>

#include <fstream>
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;

void fileIO(){

  ifstream infile("in.txt");
  ofstream outfile("out.txt");
  int s;
  while(infile >> s){
    outfile << s * s << "\n";
  }
}


struct Point{

private:
  double x, y, z;
public:
  int g;
private:
  char t;
  /*
  Point(){
    x = 0;
    y = 0;
    z = 0;
    cout << "Inside constructor.\n";
  }
  */

public:
  Point(): x(0), y(0), z(0){//Initialisation list
    cout << "Inside constructor.\n";
  }

  Point(double a, double b, double c): x(a), y(b), z(c){//Initialisation list
    //    cout << "Inside constructor.\n";
  }

  void print(){
    cout << "(" << x << ", " << y << ", " << z << ")";
  }

  Point operator+(Point p){
    Point q;
    q.x = x + p.x;
    q.y = y + p.y;
    q.z = z + p.z;
    return q;
  }
  
  void operator^(int b){
    cout << "(" << x << ", " << y << ", " << z << ")";
  }
};
  
int main(){

  /*  
  Point p;
  p.print();

  //  cout << p.t << "\n";
  
  //  cout << p.x << "\n";//Possible because x is public.
  
  Point q(4, 6, 9);
  //  Point r = p.operator+(q);
  Point r = p + q;
  p.print();
  cout << " + ";
  q.print();
  cout << " = ";
  r.print();
  cout << "\n";
  Point s(1, 2, 3);
  (s + q).print();
  cout << 5 + 6 + 7 << "\n";

  p^(2);
  */

  fileIO();
  
  return 0;

}
