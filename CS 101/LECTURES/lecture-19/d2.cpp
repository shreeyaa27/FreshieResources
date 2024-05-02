#include <simplecpp>

void hanoi(int n, char src, char tmp, char dest){

  //Must print out the sequence of moves.
  if(n == 1){
    cout << src << dest << "\n";
  }
  else{//n > 1
    hanoi(n - 1, src, dest, tmp);
    cout << src << dest << "\n";
    hanoi(n - 1, tmp, src, dest);
  }
}


void mergeSort(double A[], int start, int end){

  if(start == end){
    return;
  }

  int mid = (start + end) / 2;
  mergeSort(A, start, mid);
  mergeSort(A, mid + 1, end);

  //Merging
  double B[1000];
  int lctr = start;
  int rctr = mid + 1;
  int bctr = 0;

  while(lctr <= mid && rctr <= end){
    if(A[lctr] < A[rctr]){
      B[bctr] = A[lctr];
      lctr++;
      bctr++;
    }
    else{
      B[bctr] = A[rctr];
      rctr++;
      bctr++;
    }
  }
  while(lctr <= mid){
    B[bctr] = A[lctr];
    lctr++;
    bctr++;
  }
  while(rctr <= end){
      B[bctr] = A[rctr];
      rctr++;
      bctr++;
  }

  //Copy back into A
  for(int i = start; i <= end; i++){
    A[i] = B[i - start];
  }
  
}


main_program{

  //  int n = 4;
  //  hanoi(n, 'A', 'B', 'C');

  double A[1000];
  int n = 20;
  for(int i = 0; i < n ; i++){
    A[i] = randuv(0, 1);
  }
  cout << "Original\n";
  for(int i = 0; i < n ; i++){
    cout << A[i] << "\t";
  }
  cout << "\n";
  
  mergeSort(A, 0, n - 1);

  cout << "After sorting\n";
  for(int i = 0; i < n ; i++){
    cout << A[i] << "\t";
  }
  cout << "\n";

}

