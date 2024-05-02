#include <simplecpp>
/*
int factorial(int n){

  int f = 1;
  for(int i = 1; i <= n; i++){
    f *= i;
  }
  return f;
}
*/

int factorial(int n){

  cout << "Inside factorial with n = " << n << "\n";
    if(n == 0){
    return 1;
  }
  return n * factorial(n - 1);
  
  //  return ((n == 1)? 1 : n * factorial(n - 1));
}

int Fibonacci(int n){//Aka Virahanka

  if(n == 0){
    return 1;
  }
  if(n == 1){
    return 1;
  }

  return Fibonacci(n - 2) + Fibonacci(n - 1);
}

//a, b, c, are characters available.
void strings(char s[10000][10], int &ssize, int n){

  if(n == 1){
    s[0][0] = 'a';
    s[1][0] = 'b';
    s[2][0] = 'c';
    ssize = 3;
  }
  else{

    char ssmall[10000][10];
    int ssizesmall;
    int nsmall = n - 1;
    strings(ssmall, ssizesmall, nsmall);

    int ctr = 0;
    for(int i = 0; i < ssizesmall; i++){
      s[ctr][0] = 'a';
      for(int j = 1; j <= n; j++){
	s[ctr][j] = ssmall[i][j - 1];
      }
      ctr++;
    }
    for(int i = 0; i < ssizesmall; i++){
      s[ctr][0] = 'b';
      for(int j = 1; j <= n; j++){
	s[ctr][j] = ssmall[i][j - 1];
      } 
      ctr++;
   }
    for(int i = 0; i < ssizesmall; i++){
      s[ctr][0] = 'c';
      for(int j = 1; j <= n; j++){
	s[ctr][j] = ssmall[i][j - 1];
      }
      ctr++;
    }

    ssize = ctr;
  }

}

void printstrings(char s[10000][10], int &ssize, int n){

  //  cout << "ssize = " << ssize << "\n";
  // cout << "n = " << n << "\n";
  
  for(int i = 0; i < ssize; i++){
    for(int j = 0; j < n; j++){
      cout << s[i][j];
    }
    cout << "\n";
  }
  
}


main_program{

/*  int n = 6;
  int f = factorial(n);
  cout << n << "! = " << f << "\n";

  for(int i = 0; i < 10; i++){
    cout << "F[" << i << "] = " << Fibonacci(i) << "\n";
  }
*/
  char s[10000][10];
  int ssize;
  int n = 4;

  strings(s, ssize, n);

  printstrings(s, ssize, n);

}
