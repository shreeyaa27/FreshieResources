#include <iostream>
#include <math.h>
#include <iomanip>

using std::cout;
using std::cin;
using std::setprecision;

void swap(int &x, int &y){
  //void swap(int x, int y){

  cout << "x before swapping: " << x << "\n";
  cout << "y before swapping: " << y << "\n";

  int z = x;
  x = y;
  y = z;

  cout << "x after swapping: " << x << "\n";
  cout << "y after swapping: " << y << "\n";
}


void getPolar(float x, float y, float &r, float &theta){

  r = sqrt(x * x + y * y);
  theta = atan2(y, x);
}

void pythagorean(int m, int n){

  bool tripletFound = false;
  
  for(int a = m; a <= n; a++){
    for(int b = a + 1; b <= n; b++){
      for(int c = b + 1; c <= n; c++){

	bool f1 = false;
	if(a * a + b * b == c * c){
	  f1 = true;
	}

	bool f2 = true;
	for(int d = 2; d <= a; d++){
	  if(a % d == 0 && b % d == 0 /*&& c % d == 0*/){
	    f2 = false;
	    break;
	  }
	}

	//At this point, for a, b, c, we know if they are pythagorean (f1) and if they are co-prime (f2).
	if(f1 && f2){
	  cout << a << "\t" << b << "\t" << c << "\n";
	  tripletFound = true;
	}
      }
    }
  }

  if(!tripletFound){
    cout << 0 << "\n";
  }
  
}


int main(){

  /*
  int a = 23;
  int b = 97;

  cout << "a is originally " << a << "\n"; 
  cout << "b is originally " << b << "\n";

  swap(a, b);

  cout << "a is now " << a << "\n"; 
  cout << "b is now " << b << "\n";

  //  swap(b, 25); // Does not work
  */

  /*
  float x = -12.0;
  float y = 0;

  float r;
  float theta;

  getPolar(x, y, r, theta);

  cout << "r = " << r << "\n";
  cout << "theta = " << theta << "\n";
  */

  /*
  float x = 1.0 / 7;
  cout << setprecision(10) << x << "\n";
  */

  //  pythagorean(1, 100); 
  pythagorean(50, 70);
 
  return 0;
}
