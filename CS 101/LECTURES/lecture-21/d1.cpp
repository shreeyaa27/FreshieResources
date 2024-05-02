#include <simplecpp>

struct Record{

  char rollno[10];
  char branch[3];
  float quiz1, quiz2, midsem, endsem, lab;
  float getTotal(){
    float total = 0.15 * quiz1;
    total += 0.15 * quiz2;
    total += 0.20 * midsem;
    total += 0.15 * lab;
    total += 0.35 * endsem;
    return total;
  }
  void printRecord(){
    cout << rollno << "\t";
    cout << branch << "\t";
    cout << quiz1 << "\t";
    cout << quiz2 << "\t";
    cout << midsem << "\t";
    cout << lab << "\t";
    cout << endsem << "\n";
  }
  char getLetterGrade(){
    float total = getTotal();
    if(total > 75){
      return 'A';
    }
    else if(total > 50){
      return 'B';
    }
    else if(total > 25){
      return 'C';
    }
    else{
      return 'D';
    }
  }
};

/*
float getTotal(Record r){
  float total = 0.15 * r.quiz1;
  total += 0.15 * r.quiz2;
  total += 0.20 * r.midsem;
  total += 0.15 * r.lab;
  total += 0.35 * r.endsem;

  return total;
}
*/
/*
void printRecord(Record r){
  cout << r.rollno << "\t";
  cout << r.branch << "\t";
  cout << r.quiz1 << "\t";
  cout << r.quiz2 << "\t";
  cout << r.midsem << "\t";
  cout << r.lab << "\t";
  cout << r.endsem << "\n";
}
*/

main_program{

  Record r[1200];

  char tmp[100];
  //Read in the first line;
  cin >> tmp;
  cin >> tmp;
  cin >> tmp;
  cin >> tmp;
  cin >> tmp;
  cin >> tmp;
  cin >> tmp;

  int ctr = 0;
  while(cin >> r[ctr].rollno){
    cin >> r[ctr].branch;
    cin >> r[ctr].quiz1;
    cin >> r[ctr].quiz2;
    cin >> r[ctr].midsem;
    cin >> r[ctr].lab;
    cin >> r[ctr].endsem;
    ctr++;
  }

  int numA = 0;
  int numB = 0;
  int numC = 0;
  int numD = 0;
  
  for(int i = 0; i < ctr; i++){
    r[i].printRecord();
    cout << r[i].getTotal() << "\t" << r[i].getLetterGrade() << "\n";

    if(r[i].getLetterGrade() == 'A'){
      numA++;
    }
    if(r[i].getLetterGrade() == 'B'){
      numB++;
    }
    if(r[i].getLetterGrade() == 'C'){
      numC++;
    }
    if(r[i].getLetterGrade() == 'D'){
      numD++;
    }
  }

  cout << "A's: " << numA << "\n";
  cout << "B's: " << numB << "\n";
  cout << "C's: " << numC << "\n";
  cout << "D's: " << numD << "\n";
}
