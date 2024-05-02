#include <iostream>

using std::cout;
using std::cin;

int main(){

  float marks = 0;
  int students = 0;
  float sum = 0;

  //  cout << "Enter next student's marks: ";
  //  cin >> marks;

  while(true){

    cout << "Enter next student's marks: ";
    cin >> marks;
    if(marks < 0 || marks > 100){//Marks are illgal
      cout << "Exiting\n";
      break;
    }
    sum += marks;
    students++;
  }
  /*
  while(marks >= 0 && marks <= 100){
    cout << "Enter next student's marks: ";
    cin >> marks;

    if(marks >= 0 && marks <= 100){
      sum += marks;
      students++;
    }
  }
  */

  float average = sum / students;
  cout << "The average is: " << average << "\n";

  /*
  int n;
  cout << "Enter n: ";
  cin >> n;

  int i = 0;
  int b = 1;
  while(n >= b){
    i++;
    b *= 10;
  }
  cout << "The number of digits in " << n << " is " << i << "\n";
  */

  /*
  int m = n;
  int numDigits = 0;
  while(m > 0){
    m /= 10;
    numDigits++;
  }
  cout << "The number of digits in " << n << " is " << numDigits << "\n";
  */

  return 0;
}
