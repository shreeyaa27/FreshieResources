#include <simplecpp>

/*
int fact(int n){

  int p = 1;
  
  for(int i = 1; i <= n; i++){
    p *= i;
  }

  return p;
}
*/

int fact(int n){

  //  return ((n == 1)? 1 : n * fact(n - 1));

  cout << "Inside fact with argument " << n << "\n";
  if(n == 1){
    return 1;
  }
  return n * fact(n - 1);

}

/*
void next(int i, int j, int n, int &inew, int &jnew){

}

bool isLast(int i, int j, int n){
}


void printArray(int A[][], int i, int j, int n){

  cout << A[i][j] << " ";
  if(!isLast(i, j, n)){
    int inew, jnew;
    next(i, j, n, inew, jnew);
    printArray(A, inew, jnew, n);
  }
  
}
*/

void printWords(char w[][10], int &numWords, int n){

  for(int i = 0; i < numWords; i++){
    for(int j = 0; j < n; j++){
      cout << w[i][j];
    }
    cout << "\n";
  }
}


//Print out all words of length n over characters 'a', 'b', and 'c';
void getWords(char w[][10], int &numWords, int n){

  if(n == 1){
    w[0][0] = 'a';
    w[1][0] = 'b';
    w[2][0] = 'c';
    numWords = 3;
  }
  else{

    char smallerw[10000][10];
    int numsmallerw;
    getWords(smallerw, numsmallerw, n - 1);

    int ctr = 0;
    for(int i = 0; i < numsmallerw; i++){
      w[ctr][0] = 'a';
      for(int j = 0; j < n - 1; j++){
	w[ctr][j + 1] = smallerw[i][j];
      }
      ctr++;
    }
  
    for(int i = 0; i < numsmallerw; i++){
      w[ctr][0] = 'b';
      for(int j = 0; j < n - 1; j++){
	w[ctr][j + 1] = smallerw[i][j];
      }
      ctr++;
    }

    for(int i = 0; i < numsmallerw; i++){
      w[ctr][0] = 'c';
      for(int j = 0; j < n - 1; j++){
	w[ctr][j + 1] = smallerw[i][j];
      }
      ctr++;
    }

    numWords = ctr;
    
  }
}

main_program{
  /*
  int n = 5;
  int f = fact(n);
  cout << n << "! = " << f << "\n";
  */

  char words[10000][10];
  int numWords;
  int n = 3;
  getWords(words, numWords, n);
  printWords(words, numWords, n);
}
