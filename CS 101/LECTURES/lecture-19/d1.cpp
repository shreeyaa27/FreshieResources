#include <simplecpp>

void hanoi(int n, char src, char temp, char dest){

  if(n == 1){
    cout << src << dest << "\n";
  }
  else{
    hanoi(n - 1, src, dest, temp);
    cout << src << dest << "\n";
    hanoi(n - 1, temp, src, dest);
  }
}


void mergesort(double A[], int start, int end){

  if(start == end){
    return;
  }
  //start < end
  int mid = (start + end) / 2;
  mergesort(A, start, mid);
  mergesort(A, mid + 1, end);

  //Now to merge the two sorted sub-arrays
  double B[1000];

  int l = start;
  int r = mid + 1;
  int c = 0;

  while(l <= mid && r <= end){
    if(A[l] < A[r]){
      B[c] = A[l];
      l++;
      c++;
    }
    else{
      B[c] = A[r];
      r++;
      c++;
    }
  }
  while(l <= mid){
    B[c] = A[l];
    l++;
    c++;
  }
  while(r <= end){
    B[c] = A[r];
    r++;
    c++;
  }

  for(int i = start; i <= end; i++){
    A[i] = B[i - start];
  }
  
}


main_program{

  /*
  int n;
  cout << "Enter n: ";
  cin >> n;
  hanoi(n, 'A', 'B', 'C');
  */

  double A[1000];
  int n = 20;
  for(int i = 0; i < n; i++){
    A[i] = randuv(0, 100);
  }

  cout << "Before sorting\n";
  for(int i = 0; i < n; i++){
    cout << A[i] << "\t";
  }
  cout << "\n";
  
  mergesort(A, 0, n - 1);

  cout << "After sorting\n";
  for(int i = 0; i < n; i++){
    cout << A[i] << "\t";
  }
  cout << "\n";

}

