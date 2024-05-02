#include <iostream>

using std::cout;
using std::cin;

int main(){

  //GCD
  int m, n;
  //  cout << "Enter first number: ";
  //cin >> m;
  //cout << "Enter second number: ";
  //cin >> n;
  m = 123456700;
  n = 123456;

  int smaller, larger;
  smaller = m;
  larger = n;
  if(m > n){
    smaller = n;
    larger = m;
  }

  /*
  int gcd = 1;
  for(int i = 1; i <= smaller; i++){

    if(smaller % i == 0 && larger % i == 0){
      gcd = i;
    }
  }
  */


  int gcd = smaller;
  for(int i = smaller; i >= 1; i--){

    if(smaller % i == 0 && larger % i == 0){
      gcd = i;
      break;
    }
  }

  /*
  int gcd;
  while(larger % smaller != 0){
    
    int remainder = larger % smaller;
    larger = smaller;
    smaller = remainder;
  }
  gcd = smaller;
  */

  //    cout << "The GCD of " << m << " and " << n << " is " << gcd << "\n";

  /*
  int i = 99;
  for(int i = 1; i >= 4 && i <= 10; i++){
    cout << i * i * i << "\n";
    //    i++;
  }
  cout << "outer i: " << i << "\n";
  */


  /*
  float marks = 0;
  int numStudents = -1;
  float total = 0;

  do{
    total += marks;
    numStudents++;

    cout << "Enter marks ";
    cin >> marks;
  }while(marks >= 0);

  cout << "Average = " << (total / numStudents) << "\n";
  */
  
  return 0;
}
