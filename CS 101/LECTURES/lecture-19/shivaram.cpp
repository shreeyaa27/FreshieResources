#include <simplecpp>

int maxIndex(double a[], int begin, int end){//Both begin and end included.

  int max = begin;
  for(int i = begin + 1; i <= end ; i++){

    if(a[i] > a[max]){
      max = i;
    }
  }

  return max;
}

void swap(double a[], int i, int j){

  double x = a[i];
  a[i] = a[j];
  a[j] = x;
}


void selectionSort(double a[], int n){

  for(int i = 0; i < n - 1; i++){
    int maxI = maxIndex(a, 0, n - 1 - i);
    swap(a, maxI, n - 1 - i);
  }
  
}

void hanoi(int n, char a, char b, char c){

  if(n == 1){
    cout << a << " -> " << b << "\n";
  }
  else{
    hanoi(n - 1, a, c, b);
    cout << a << " -> " << b << "\n";
    hanoi(n - 1, c, b, a);
  }

}


void mergesort(double a[10000], int start, int end){
  
  if(start == end){
    return;
  }

  int mid = (start + end) / 2;

  mergesort(a, start, mid);
  mergesort(a, mid + 1, end);

  double b[10000];

  int l = start, r = mid + 1, c = 0;
  while(l <= mid && r <= end){
    if(a[l] < a[r]){
      b[c] = a[l];
      c++;
      l++;
    }
    else{
      b[c] = a[r];
      c++;
      r++;
    }
  }
  while(l <= mid){
    b[c] = a[l];
    c++;
    l++;
  }
  while(r <= end){
    b[c] = a[r];
    c++;
    r++;
  }

  for(int i = start; i <= end; i++){
    a[i] = b[i - start];
  }

}


main_program{

  //  srand(time(NULL));
  unsigned long int startTime = time(NULL);

  for(int sweep = 0; sweep < 100; sweep++){
    srand(sweep);
    double a[9000];
    for(int i = 0; i < 9000; i++){
      a[i]  = randuv(0, 1);
    }
    
    //mergesort(a, 0, 9000);
    selectionSort(a, 9000);
  }

  unsigned long int endTime = time(NULL);
  int duration = endTime - startTime;
  cout << "Duration: " << duration << "\n";

  //  hanoi(3, 'A', 'B', 'C');

}
