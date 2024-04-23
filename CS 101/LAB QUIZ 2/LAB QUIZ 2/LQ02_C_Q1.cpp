#include <simplecpp>

#define CONTINUE 0
#define LINEOVER 1
#define ALLOVER 2

int next(int i, int j, int &nexti, int &nextj, int n){

  if((i == n - 1) && (j == n - 1)){
    return ALLOVER;
  }
  
  if(i > 0 && j < n - 1){
    nexti = i - 1;
    nextj = j + 1;
    return CONTINUE;
  }
  else if(i > 0 && j == n - 1){
    nexti = n - 1;
    nextj = i + 1;
    return LINEOVER;
  }
  else if(i == 0 && j < n - 1){
    nexti = j + 1;
    nextj = 0;
    return LINEOVER;
  }
  else if(i == 0 && j == n - 1){
    nexti = n - 1;
    nextj = 1;
    return LINEOVER;
  }

  //Must not reach.
  return CONTINUE;
}

main_program{

  int n;
  cin >> n;

  int A[50][50];
  int i, j;
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      cin >> A[i][j];
    }
  }

  i = 0;
  j = 0;
  int nexti = 0;
  int nextj = 0;
  int outcome = CONTINUE;

  do{
    cout << A[i][j] << " ";
    //cout << "(" << i << ", " << j << ") ";
    outcome = next(i, j, nexti, nextj, n);
    if(outcome == LINEOVER){
      cout << "\n";
    }
    else if(outcome == ALLOVER){
      return 0;
    }
    i = nexti;
    j = nextj;
  }while(true);

  return 0;

}

