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
  else if(income <= 500000){
    tax = 0.1 * (income - 180000);
  }
  else if(income <= 800000){
    tax = 32000 + 0.2 * (income - 500000);
  }
  else{
    tax = 92000 + 0.3 * (income - 800000);
  }

  cout << "Tax = " << tax << "\n";

  return 0;
}
