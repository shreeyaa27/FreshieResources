#include <iostream>

using std::cin;
using std::cout;

bool valid(int A[9]){

  bool occurs[9];
  for(int i = 0; i < 9; i++){
    occurs[i] = false;
  }
  for(int i = 0; i < 9; i++){
    occurs[A[i] - 1] = true;
  }
  for(int i = 0; i < 9; i++){
    if(!occurs[i]){
      return false;
    }
  }
  return true;
}

int main(){

  int A[9][9];
  
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      cin >> A[i][j];
    }
  }

  int temp[9];
  //Rows
  int numRowsViolate = 0;
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
      temp[j] = A[i][j];
    }
    if(!valid(temp)){
      numRowsViolate++;
    }
  }

  //Columns
  int numColumnsViolate = 0;
  for(int j = 0; j < 9; j++){
    for(int i = 0; i < 9; i++){
      temp[i] = A[i][j];
    }
    if(!valid(temp)){
      numColumnsViolate++;
    }
  }

  //Grids
  int numGridsViolate = 0;

  for(int gx = 0; gx < 9; gx += 3){
    for(int gy = 0; gy < 9; gy += 3){

      int ctr = 0;
      for(int i = 0; i < 3; i++){
	for(int j = 0; j < 3; j++){
	  temp[ctr] = A[gx + i][gy + j];
	  ctr++;
	}
      }

      if(!valid(temp)){
	numGridsViolate++;
      }
    }
  }
  

  cout << numRowsViolate << " ";
  cout << numColumnsViolate << " ";
  cout << numGridsViolate << "\n";

  return 0;
}

