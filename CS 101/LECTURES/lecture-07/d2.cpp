#include <iostream>

using std::cout;
using std::cin;

int main(){

  double income;
  cout << "Enter income: ";
  cin >> income;

  double tax = 0;
  if(income <= 180000){
    tax = 0;
  }
  else{
    
    if(income <= 500000){
      tax = 0.1 * (income - 180000);
    }
    else{
      
      if(income <= 800000){
	tax = 32000 + 0.2 * (income - 500000);
      }
      else{
	tax = 92000 + 0.3 * (income - 800000);
      }
    }
  }  
  cout << "Tax = " << tax << "\n";

  /*
    int n;
  cout << "Enter number: ";
  cin >> n;
  
  int remainder = n % 2;
  if(remainder == 0)//{
    cout << "The number is even.\\n";
  cout << "One more line\n";
    //  }
  //  else
  //  cout << "The number is odd.\\\\\\n";
  */

  /*
  cout << (23 < 45) << "\n";
  cout << (23 <= 45) << "\n";
  cout << (23 > 45) << "\n";
  cout << (23 >= 45) << "\n";
  cout << (23 != 45) << "\n";
  cout << (23 == 45) << "\n";

  cout << "Experiment: " << (false < true) << "\n";

  bool x = 6;
  bool y = 5;
  // Watch out for these sorts of errors!
  cout << "Intended: " << (x == y) << "\n";
  cout << "Accidental: " << (x = y) << "\n";
  */

  /*
  bool a = false;
  bool b = true;

  bool c = a && b;
  bool d = a || b;

  bool e = !a;
  bool f = !b;

  cout << "a: " << a << "\n";
  cout << "b: " << b << "\n";
  cout << "c: " << c << "\n";
  cout << "d: " << d << "\n";
  cout << "e: " << e << "\n";
  cout << "f: " << f << "\n";
  
  bool g = (a && a) || (b && !a);
  bool h =  a && b && c;


  cout << "g: " << g << "\n";
  cout << "h: " << h << "\n";

  cout << "g || h: " << (g || h) << "\n";

  cout << "!!g: " << !!g << "\n";
  */

  return 0;
}
