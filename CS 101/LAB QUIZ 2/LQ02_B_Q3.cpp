#include <iostream>

using std::cin;
using std::cout;

int main(){

  int n, start, end;
  int A[100][100];
  int B[100][100];
  int C[100][100];
  cin >> n;
  cin >> start;
  cin >> end;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> A[i][j];
      B[i][j] = A[i][j];
      C[i][j] = 0;
    }
  }

  for(int i = 0; i < n; i++){
    if(B[start][end] > 0){
      cout << (i + 1) << "\n";
      break;
    }

    //B = BA
    for(int r = 0; r < n; r++){
      for(int c = 0; c < n; c++){
	int x = 0;
	for(int k = 0; k < n; k++){
	  x += B[r][k] * A[k][c];
	}
	C[r][c] = x;
      }
    }
    
    for(int r = 0; r < n; r++){
      for(int c = 0; c < n; c++){
	B[r][c] = C[r][c];
      }
    }

  }

  return 0;
  
}

