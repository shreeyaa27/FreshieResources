#include <iostream>

using std::cin;
using std::cout;

int main(){

  char para[1500];
  char text[1500];

  cin.getline(para, 1500);
  cin >> text;

  int plen = 0;
  while(para[plen] != '\0'){
    plen++;
  }

  int tlen = 0;
  while(text[tlen] != '\0'){
    tlen++;
  }

  int numMatches = 0;
  for(int p = 0; p < plen - tlen; p++){
    bool matches = true;
    for(int t = 0; t < tlen; t++){
      if(text[t] != para[p + t]){
	matches = false;
	break;
      }
    }
    if(matches){
      cout << p << " " << (p + tlen - 1) << "\n";
      numMatches++;
    }
  }
  cout << numMatches << "\n";

}

