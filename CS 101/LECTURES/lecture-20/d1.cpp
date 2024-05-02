#include <simplecpp>

struct Date{
  int day, month, year;//integers
};

struct Student{

  char name[50];
  char rollno[10];
  char photographlink[50];
  Date dob;
};

Date fun(Date d){

  Date oneyearlater;
  oneyearlater.year = d.year + 1;
  oneyearlater.month = d.month;
  oneyearlater.day = d.day;

  return oneyearlater;
}

Date fun1(){

  Date d;
  d.year = 2000;
  d.month = 12;
  d.day = 12;

  return d;
}


main_program{

struct Professor{

  char name[50];
  char rollno[10];
  char photographlink[50];
  Date dob;
};

 Student s, t;
  
  cout << "Enter name: ";
  cin >> s.name;

  cout << "Enter birth year, month, day:\n";
  cin >> s.dob.year >> s.dob.month >> s.dob.day;

  cout << "Student (s) name is " << s.name << "\n";
  cout << "DOB is " << s.dob.day << "-" << s.dob.month << "-" << s.dob.year << "\n";

  /*
  Student d1[325];//Array of structures

  char name[50];
  strcpy(name, "Shivaram");
  cout << name << "\n";
  */

  t = s;
  cout << "Student (t) name is " << s.name << "\n";
  cout << "DOB is " << s.dob.day << "-" << s.dob.month << "-" << s.dob.year << "\n";

  //  Date oneyearlater = fun(s.dob);
  Date oneyearlater = fun1();
  cout << "Student turned 1 year old on " << oneyearlater.day << "-" << oneyearlater.month << "-" << oneyearlater.year << "\n";
    
  Professor u;
    //u = s;
}
