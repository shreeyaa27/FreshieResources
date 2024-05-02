#include <iostream>
#include <math.h>

using std::cout;
using std::cin;

void swap(int &x, int &y){
  //void swap(int x, int y){

  //  cout << "Before within swap x " << x << "\n";
  //  cout << "Before within swap y " << y << "\n";
  
  int z = x;
  x = y;
  y = z;
  
  //  cout << "After within swap x " << x << "\n";
  //  cout << "After within swap y " << y << "\n";

  return;
}

void getPolar(float x, float y, float &r, float &theta){

  r = sqrt(x * x + y * y);
  theta = atan2(y, x);
}

void setDigits(int n, int &l, int &m, int &r){
  l = n / 100;
  m = (n % 100) / 10;
  r = n % 10;
}

void sortDigits(int &a, int &b, int & c){

  if(a > b){
    swap(a, b);
  }
  if(b > c){
    swap(b, c);
  }
  if(a > b){
    swap(a, b);
  }
}


void perm(int n){
  //n is 3-digit

  int l, m, r;
  setDigits(n, l, m, r);
  sortDigits(l, m, r);
  
  for(int i = 100; i <= 999; i++){
    int l1, m1, r1;
    setDigits(i, l1, m1, r1);
    //    cout << l1 << m1 << r1;
    sortDigits(l1, m1, r1);
    //cout << "\t";
    //cout << l1 << m1 << r1 << "\n";

    if(l1 == l && m1 == m && r1 == r){
      cout << i << "\n";
    }

    /*
    bool match = true;
    if(l != l1 && l != m1 && l != r1){
      match = false;
    }
    if(m != l1 && m != m1 && m != r1){
      match = false;
    }
    if(r != l1 && r != m1 && r != r1){
      match = false;
    }

    if(l1 != l && l1 != m && l1 != r){
      match = false;
    }
    
    if(m1 != l && m1 != m && m1 != r){
      match = false;
    }
    if(r1 != l && r1 != m && r1 != r){
      match = false;
    }
    */
  }
  

}


int main(){

  perm(913);
  
  /*
  int a = 10, b = 17;
  cout << "Before swap: a = " << a << "\n";
  cout << "Before swap: b = " << b << "\n";

  swap(a, b);
  
  cout << "After swap: a = " << a << "\n";
  cout << "After swap: b = " << b << "\n";

  //  swap(a, 33);
  */

  /*
    float x = -5, y = -12;
  float r, theta;
  getPolar(x, y, r, theta);

  cout << "r: " << r << "\n";
  cout << "theta in degrees: " << theta * 180.0 / 3.14159 << "\n";
  */
  return 0;
}
