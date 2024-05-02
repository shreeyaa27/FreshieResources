#include <iostream>

using std::cin;
using std::cout;

void print(double b[], int m){

  for(int i = 0; i < m; i++){
    cout << b[i] << "\n";
  }
  cout << "\n";
}

void bubbleSort(double b[], int m){

  for(int i = 0; i < m - 1; i++){
    for(int j = 0; j < m - 1 - i; j++){
      //Get b[j] and b[j + 1] in the right order.
      if(b[j] > b[j + 1]){
	double z = b[j];
	b[j] = b[j + 1];
	b[j + 1] = z;
      }
    }
  }

}

int maxIndex(double b[], int start, int end){

  int max = start;

  for(int i = start + 1; i <= end; i++){
    if(b[i] > b[max]){
      max = i;
    }
  }
  
  return max;
}

void selectionSort(double b[], int m){

  for(int i = 0; i < m - 1; i++){
    int maxI = maxIndex(b, 0, m - 1 - i);
      if(b[maxI] > b[m - 1 - i]){
	double z = b[m - 1 - i];
	b[m - 1 - i] = b[maxI];
	b[maxI] = z;
      }
  }

}


int main(){

  int MAX = 10000;
  double a[MAX];
  int n = 0;
  double x;

  while(cin >> x){
    a[n] = x;
    n++;
  }

  print(a, n);
  //  cout << "Max index: " << maxIndex(a, 2, 6) << "\n";
  //  bubbleSort(a, n);
  selectionSort(a, n);
  cout << "Sorted!______\n";
  print(a, n);
  
  return 0;
}
