#include <simplecpp>

main_program{

  int N = 100000;

  int i = 1;
  repeat(N){
    
    bool iIsPerfect = false;
    int sum = 0;
    int j = 1;
    repeat(i - 1){
      
      if(i % j == 0){//j is a factor of i
	sum += j;
      }

      j++;
    }

    if(sum == i){
      iIsPerfect = true;
    }
    
    if(iIsPerfect){
      cout << i << "\n";
    }

    i++;
  }

}
