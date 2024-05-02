#include <iostream>

using std::cout;
using std::cin;

int main(){

  int i = 0, j  = 0;
  while(i < 10){
    i++;
    j = 0;
    while(j < 5){
      j++;
      if(j == 2){
	break;
      }
      cout << i << " " << j << "\n";
    }
  }


  int numberOfStudents = 0;
  float totalMarks = 0;
  float average;
  float nextMarks = 0;

  /*
  while(nextMarks >= 0){

    cout << "Enter next student's marks: ";
    cin >> nextMarks;
    if(nextMarks >= 0){
      totalMarks += nextMarks;
      numberOfStudents++;
    }
  }
  */

  while(true){

    cout << "Enter next student's marks: ";
    cin >> nextMarks;
    cout << "[" << nextMarks << "]";
    if(nextMarks < 0){
      break;
    }
    totalMarks += nextMarks;
    numberOfStudents++;
  }

  average = totalMarks / numberOfStudents;
  cout << "Average: " << average << "\n";

  /*
  int n;
  cout << "Enter n: ";
  cin >> n;
  int numDigits = 0;

  int x = 1;
  while(x <= n){
    x *= 10;
    numDigits++;
  }
  cout << "n has " << numDigits << " digits.\n";
  */


  /*
  while(n > 0){
    n = n / 10;
    numDigits++;
  }
  cout << "n has " << numDigits << " digits.\n";
  */


  /*
  int x = 2;
  while(x > 0){
    x--;
    cout << x << "\n";
  }
  cout << "Done\n";
  */

  return 0;
}
