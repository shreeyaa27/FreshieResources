#include <iostream>
using namespace std;

int countWords(char *str) {
  if (*str == '\0') {
    return 0;
  }

  
  if (*str == ' ' && *(str-1)!=' ') {
    return 1 + countWords(str + 1);
  }

  
  
  return countWords(str + 1);
  
}

int main() {
  char str[1000];
  cin.getline(str, 1000);
  int wordCount = countWords(str);
  cout << wordCount+1 << endl;
  return 0;
}