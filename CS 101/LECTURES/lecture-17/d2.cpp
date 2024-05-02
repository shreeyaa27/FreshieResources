#include <iostream>

//#define NDEBUG 
//Turns off assert

#include <cassert>

using std::cin;
using std::cout;

void demoAssert(){

  cout << "Enter positive number\n";
  int n;
  cin >> n;

  assert(n > 0);

  cout << "Good user. Number entered is " << n << "\n";
}

void reverse(char dest[], char src[]){

  int i = 0;
  while(src[i] != '\0'){
    i++;
  }
  i--;
  
  int j = 0;
  while(i >= 0){
    dest[j] = src[i];
    i--;
    j++;
  }

    dest[j] = '\0';

}

bool precedes(char s1[], char s2[]){

  int i = 0;
  int j = 0;

  while(s1[i] != '\0' && s2[j] != '\0'){

    if(s1[i] < s2[j]){
      return true;
    }
    i++;
    j++;
  }

  if(s1[i] == '\0'){
    return true;
  }
  
  return false;

}

void demoCharArrays(){

  char a[20], b[] = "CS101", c[] = "Life is beautiful";

  //  cout << "Enter a.\n";
  //  cin >> a;
  //  cin.getline(a, 8);
  //cout << "a is: " << a << "\n";
  cout << "b is: " << b << "\n";
  cout << "c is: " << c << "\n";

  reverse(a, c);
  cout << "a is: " << a << "\n";
}

int main(){


  //demoAssert();
  demoCharArrays();

  char a[] = "heavens";
  char b[] = "Heaven";
  
  cout << a << ",  " << b << precedes(a, b) << "\n";
  
  return 0;
}

