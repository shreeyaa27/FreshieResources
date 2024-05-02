#include<iostream>

using std::cin;
using std::cout;

int main(){

  int n;
  double A[50][50];
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> A[i][j];
    }
  }

  double B[50][50];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      B[i][j] = 0;
      for(int k = 0; k < n; k++){
	B[i][j] += A[i][k] * A[k][j];
      }
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << B[i][j] << " ";
    }
    cout << "\n";
  }

  
  return 0;
}

