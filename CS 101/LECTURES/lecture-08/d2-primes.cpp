#include <simplecpp>

main_program{

  int N = 10000;

  int i = 2;
  repeat(N - 1){

    bool iIsPrime = true;

    int x = 2;
    repeat(i - 2){

      if(i % x == 0){
	iIsPrime = false;
      }

      x++;
    }

    if(iIsPrime)
      cout << i << "\n";
    
   
    i++;
  }

}
