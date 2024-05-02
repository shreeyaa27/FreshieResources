#include <simplecpp>

int len(char word[]){
  int i = 0;
  while(word[i] != '\0'){
    i++;
  }
  return i;
}

main_program{

  char para[1000];
  int width;

  cin.getline(para, 1000);
  cin >> width;

  int ctr = 0;
  while(para[ctr] != '\0'){
    cout << para[ctr];
    ctr++;
    if(ctr % width == 0){
      cout << "\n";
    }
  }
  
}

