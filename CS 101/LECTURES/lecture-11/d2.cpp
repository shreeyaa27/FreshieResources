#include <simplecpp>


int gcd(int a, int b){
  //int gcd(a, b){
  
  int l = a;
  int s = b;
  if(l < s){
    l = b;
    s = a;
  }

  while(l % s != 0){
    int rem = l % s;
    l = s;
    s = rem;
  }

  return s;
}

int lcm(int a, int b){
  
  return (a * b) / gcd(a, b);
}

void dashedLine(int length, int stride){
  //In general might want to account for length not being a multiple of (2 * stride).
  int repetitions = length / (2 * stride);

  repeat(repetitions){

    penDown();
    forward(stride);
    penUp();
    forward(stride);
  }
}

main_program{

  /*
  turtleSim();
  int numSides = 7;
  int length = 200;
  repeat(numSides){
    //    forward(length);//////////////////
    dashedLine(length, 10);
    left(360.0 / numSides);
    wait(0.3);
  }
  wait(4);
  */

  /*
  int a, b;

  //  int gcd = 5;
  
  a = 48;
  b = 36;
  int g1 = gcd(a, b);
  cout << "g1: " << g1 << "\n";

  //  float x = sqrt(2.0);

  a = 24;
  b = 97;
  int g2 = gcd(a, b);
  cout << "g2: " << g2 << "\n";

  cout << "g3: " << gcd(13, 1040) << "\n";
  */

  int a = 48;
  int b = 36;
  int l1 = lcm(a, b);
  cout << "l1: " << l1 << "\n";

}
