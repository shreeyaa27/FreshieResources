#include <iostream>

using std::cout;
using std::cin;

int main(){

  int m, n;
  /*
  cout << "Enter first number: ";
  cin >> m;
  cout << "Enter second number: ";
  cin >> n;
  */
  m = 1234560;
  n = 1234500;

  int l, s;
  l = m;
  s = n;
  if(m < n){
    l = n;
    s = m;
  }

  /*
  int gcd = 1;
  for(int i = 2; i <= s; i++){
    if(l % i == 0 && s % i == 0){
      gcd = i;
    }
    }
  */

  /*
  int gcd = s;
  for(int i = s; i >= 1; i--){
    if(l % i == 0 && s % i == 0){
      gcd = i;
      break;
    }
  }
  */

  /*
  int gcd = 0;
  for(int i = s; i >= 1 && gcd == 00; i--){
    if(l % i == 0 && s % i == 0){
      gcd = i;
    }
  }
  */

  int gcd = -1;
  while(l % s != 0){
    
    int rem = l % s;
    l = s;
    s = rem;

  }
  gcd = s;


  //    cout << "gcd = " << gcd << "\n";


  /*
  int i = 100;
  for(int i = 1; i <= 10; i++){
    cout << (i * i * i) << "\n";
  }

  cout << "Outer i " << i << "\n";
  */


  /*
  int a = 5;
  int count = 1;

  do{
    int a1 = 3;
    a1 = a1 + 1;
    count++;
  }while(count <= 10);

  cout << "a = " << a << "\n";
  */

  return 0;
}
