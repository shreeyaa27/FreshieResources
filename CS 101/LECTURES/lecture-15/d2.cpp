#include <iostream>

using std::cin;
using std::cout;

void print(double a[], int n, char delim){
  for(int i = 0; i < n - 1; i++){
    cout << a[i] << delim;
  }
  cout << a[n - 1] << "\n";
}

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

void insertionSort(double a[], int n){

  for(int i = 1; i < n; i++){

    //Assume 0, 1, ..., i - 1 is sorted.
    int j = 0;
    while(a[i] > a[j] && j < i){
      j++;
    }
    if(j < i - 1){
      double x = a[i];
      for(int k = i; k > j; k--){
	a[k] = a[k - 1];
      }
      a[j] = x;
    }

  }

}



int main(){

  double a[10000];
  int n = 0;
  
  double x;
  while(cin >> x){
    a[n] = x;
    n++;
  }

  //  print(a, n, ' ');
  //  cout << maxIndex(a, 0, 6) << "\n";
  //  swap(a, 0, 1);

  //  cout << "After sort\n";
  //  selectionSort(a, n);
  insertionSort(a, n);
  print(a, n, '\n');

  
  return 0;
}
