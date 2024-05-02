#include <simplecpp>

struct Student{

  char rollno[10];
  char branch[3];
  float quiz1, quiz2, midsem, lab, endsem;
  
  float getCourseTotal(){
    
    float total = 0;
    total += 0.1 * quiz1;
    total += 0.1 * quiz2;
    total += 0.25 * midsem;
    total += 0.15 * lab;
    total += 0.4 * endsem;
    
    return total;
  }

  void printStudent(){
    
    cout << rollno << "\t";
    cout << branch << "\t";
    cout << quiz1 << "\t";
    cout << quiz2 << "\t";
    cout << midsem << "\t";
    cout << lab << "\t";
    cout << endsem << "\t";
    cout << getCourseTotal() << "\n";
  }

  bool passes(float threshold){
    if(getCourseTotal() >= threshold){
      return true;
    }
    return false;
  }
};
  
/*
float getCourseTotal(Student s){

  float total = 0;
  total += 0.1 * s.quiz1;
  total += 0.1 * s.quiz2;
  total += 0.25 * s.midsem;
  total += 0.15 * s.lab;
  total += 0.4 * s.endsem;

  return total;
}
*/

/*
void printStudent(Student s){

  cout << s.rollno << "\t";
  cout << s.branch << "\t";
  cout << s.quiz1 << "\t";
  cout << s.quiz2 << "\t";
  cout << s.midsem << "\t";
  cout << s.lab << "\t";
  cout << s.endsem << "\t";
  cout << s.getCourseTotal() << "\n";
}
*/

main_program{

  Student s[2000];

  char dummy[20];
  for(int i = 0; i < 7; i++){
    cin >> dummy;
  }

  int ctr = 0;
  while(cin >> s[ctr].rollno){
    cin >> s[ctr].branch;
    cin >> s[ctr].quiz1;
    cin >> s[ctr].quiz2;
    cin >> s[ctr].midsem;
    cin >> s[ctr].lab;
    cin >> s[ctr].endsem;
    ctr++;
  }

  for(int i = 0; i < ctr; i++){
    s[i].printStudent();
  }

  for(double thresh = 0; thresh <= 100; thresh += 2.0){
    int numPass = 0;
    for(int i = 0; i < ctr; i++){
      //if student i passes
      if(s[i].passes(thresh)){
	numPass++;
      }
    }

    cout << thresh << "\t" << numPass << "\n";
  }
  

}
