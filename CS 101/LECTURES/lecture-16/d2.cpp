#include <iostream>
#include <ctime>

using std::cin;
using std::cout;

void array2d(){

  int A[10][10];
  int r, c;
  
  cin >> r;
  cin >> c;
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cin >> A[i][j];
    }
  }

  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      cout << A[i][j] << "\t";
    }
	cout << "\n";
  }

  int B[10][10];
  int rb, cb;

  rb = c;
  cb = r;

  for(int i = 0; i < rb; i++){
    for(int j = 0; j < cb; j++){
      B[i][j] = A[j][i];
    }
  }
  
  cout << "B:\n";
  for(int i = 0; i < rb; i++){
    for(int j = 0; j < cb; j++){
      cout << B[i][j] << "\t";
    }
	cout << "\n";
  }

  
}

double randuv(double u, double v){

  return u + (rand() / (1.0 + RAND_MAX)) * (v - u);
}

void randomNumbers(){
 
  //  srand(10);
  cout << "RM " << RAND_MAX << "\n";
  //srand(time(NULL));
  // cout << "time = " << time(NULL) << "\n";
  int x = rand();
  int y = rand();
  cout << "x = " << x << "\n";
  cout << "y = " << y << "\n";
}

void render(int r, int c, int hx, int hy, int mx, int my){

  cout << "\n";
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){

      if(i == hx && j == hy){
	cout << 'H';
      }
      else if(i == mx && j == my){
	cout << 'M';
      }
      else{
	cout << "_";
      }

    }
    
    cout << "\n";

  }
  cout << "\n";


}

void takeAction(int r, int c, int hx, int hy, int &mx, int &my){

  double nas = 0.3;
  int dirX = 1;
  int dirY = 1;
  if(randuv(0, 1) < nas){
    dirX = -1;
  }
  if(randuv(0, 1) < nas){
    dirY = -1;
  }
  
  if(mx < hx){
    mx += dirX;
  }
  else if(mx > hx){
    mx -= dirX;
  }

  if(my < hy){
    my += dirY;
  }
  else if(my > hy){
    my -= dirY;
  }

  if(mx < 0){
    mx = 0;
  }
  if(mx > r - 1){
    mx = r - 1;
  }
  if(my < 0){
    my = 0;
  }
  if(my > c - 1){
    my = c - 1;
  }

}


void simulation(){

  srand(time(NULL));

  int r = 20, c = 25;
  int hx = 3, hy = 4;
  int mx = 17, my = 13;

  int steps = 0;
  render(r, c, hx, hy, mx, my);
  cout << "Steps: " << steps << "\n";

  char h;
  while(hx != mx || hy != my){
    takeAction(r, c, hx, hy, mx, my);
    steps++;
    render(r, c, hx, hy, mx, my);
    cout << "Steps: " << steps << "\n";
    cin >> h;
    //usleep(500);
  }
  
}

int main(){

  //  array2d();
    randomNumbers();
    //simulation();
  return 0;
}
