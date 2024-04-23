#include <iostream>

using std::cin;
using std::cout;
using std::endl;


struct TimeStamp {
    // Member Variables
    int hours;
    int minutes ;
};


TimeStamp CorrectTimeStamp(TimeStamp T){
      // Complete the function to handle overflow of minutes
      // Return the correct timestamp
      // You can call this function from other functions if needed

  TimeStamp ts;
  ts.hours = T.hours + T.minutes / 60;
  ts.minutes = T.minutes % 60; 

  return ts;
}


TimeStamp Add ( TimeStamp T1, TimeStamp T2 ) {
	// complete the function to add T1 and T2
      // return the result as a TimeStamp object back to the main

  TimeStamp ts;
  ts.hours = T1.hours + T2.hours;
  ts.minutes = T1.minutes + T2.minutes;
  return CorrectTimeStamp(ts);
}


TimeStamp Subtract( TimeStamp T1, TimeStamp T2){
	// complete the function to subtract T2 from T1 (T1-T2)
      // return the result as a TimeStamp object back to the main
  TimeStamp ts;
  ts.hours = T1.hours - T2.hours;
  ts.minutes = T1.minutes - T2.minutes;
  if(ts.minutes < 0){
    ts.hours -= 1;
    ts.minutes += 60;
  }
  
  return CorrectTimeStamp(ts);

}


bool Compare(TimeStamp T1, TimeStamp T2){
	// Complete the function to compare T1 and T2
      // return True if T1 >= T2, else return false
  return (T1.hours * 60 + T1.minutes >= T2.hours * 60 + T2.minutes);

}
   
TimeStamp AddMinutesToTimeStamp(TimeStamp T3 ,int Minutes){
	// complete the function to add Minutes to and T3 object 
      // return the result as a TimeStamp object back to the main

  TimeStamp ts;
  ts.hours = T3.hours;
  ts.minutes = T3.minutes + Minutes;
  return CorrectTimeStamp(ts);
}


void PrintTimeStamp ( TimeStamp T ) {
      // Complete the function to
      // Print hours and minutes of the T object
	// Do NOT change other output strings
      // Just write the variables to print hours and minutes

cout<< T.hours/*Write variable to print hours*/ ;
cout<< " hrs " ;
cout<< T.minutes /*Write variable to print minutes*/;
cout<< " mins ";
}


// Do NOT MODIFY ANYTHING IN THE main_program
int main() {
    TimeStamp T1, T2, T3, T4;


    // Inputs: 
    int T1_m, T2_m, T3_m, T1_h, T2_h, T3_h;
    cin >> T1_h >> T1_m >> T2_h >> T2_m >> T3_h >> T3_m;


    int Minutes;
    cin >> Minutes;


    T1.minutes = T1_m;
    T2.minutes = T2_m;
    T3.minutes = T3_m;


    T1.hours = T1_h;
    T2.hours = T2_h;
    T3.hours = T3_h;


    // Convert T1, T2, T3 to convert to correct time
    // i.e. if minutes of these are greater than 60 
    T1 = CorrectTimeStamp(T1);
    T2 = CorrectTimeStamp(T2);
    T3 = CorrectTimeStamp(T3);


    // T1 + T2
    T4 = Add(T1,T2);
    PrintTimeStamp(T1);
    cout<<" + ";
    PrintTimeStamp(T2);
    cout<<" = ";
    PrintTimeStamp(T4);
    cout<<endl;


    // Compare T1 and T2    
    if(Compare(T1,T2)) { // If T1 >= T2 then perform T1 - T2
        PrintTimeStamp(T1);
        cout<<" - ";
        PrintTimeStamp(T2);
        cout<<" = ";
        PrintTimeStamp(Subtract(T1,T2));
    }
    else { // Else perform T2 - T1
        PrintTimeStamp(T2);
        cout<<" - ";
        PrintTimeStamp(T1);
        cout<<" = ";
        PrintTimeStamp(Subtract(T2,T1));
    }
    cout<<endl;
   
    // T3 + Minutes
    PrintTimeStamp(T3);
    cout<<" + ";
    cout<<Minutes;
    cout<<" minutes = ";
    T4 = AddMinutesToTimeStamp(T3,Minutes);
    PrintTimeStamp(T4);
    cout<<endl;
}

