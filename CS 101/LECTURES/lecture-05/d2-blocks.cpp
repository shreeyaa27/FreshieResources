#include <simplecpp>

int term = 988;
main_program{

  int s = 0;
  //  int term = 988;

  repeat(5){
    //    cout << "1. term is " << term << "\n";
    float term;
    cin >> term;
    cout << "2. term is " << term << "\n";
    s += term;

    cout << "Outside term is " << ::term << "\n";
    cout << "Inside term is " << term << "\n";
  }
  cout << "s is " << s << "\n";

  cout << "3. term is " << term << "\n";
  
  /*
  float a = 56.7;
  float b = 0;
  float c = a / b;

  unsigned int d = c;
  cout << "d is " << d << "\n";
  repeat(d){
    cout << "Wow, it works!\n";
  }
  */

}
