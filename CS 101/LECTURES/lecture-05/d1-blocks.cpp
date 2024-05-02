#include <simplecpp>

main_program{

  int s = 1;
  int term = 27;

  //  term = 25;

  repeat(5){
    //    int term;
    cin >> term;
    cout << "Entered value was " << term << endl;
    s *= term;
  }

  cout << s << endl;
  cout << term << endl;
}
