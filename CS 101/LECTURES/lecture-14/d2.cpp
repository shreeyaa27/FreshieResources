#include <iostream>
#include <math.h>

using std::cin;
using std::cout;

int getCount(float start, float end, float m[], int n){

	int count = 0;
	for(int i = 0; i < n; i++){

		if(m[i]	>= start && m[i] <= end){
		count++;
		
		}

	
	}

	return count;

}


int main(){
	
	int test[4] = {0, 1, 2};
	cout << test[0] << "\n";
	cout << test[1] << "\n";
	cout << test[2] << "\n";

	float marks[1000];
	int numSt = 0;
	
	do
	{
		cin >> marks[numSt];
		numSt++;
	}while(marks[numSt - 1] >= 0);	

	numSt--;

	/*
	cout << "------\n";
	
	for(int i = 0; i < numSt; i++){
		cout << marks[numSt - 1 - i] << "\n";
	}
*/

	float sum = 0;
	float avg = 0;
	float var = 0;
	for(int i = 0; i < numSt; i++){
		sum += marks[i];
	}	
	avg = sum / numSt;
	cout << "Average: " << avg << "\n";
	for(int i = 0; i < numSt; i++){
		var += (marks[i] - avg) * (marks[i] - avg);
	}	
	var /= numSt;
	cout << "std dev = " << sqrt(var) << "\n";

	int c = getCount(25, 30, marks, numSt);
	cout << "Count in range = " << c << "\n";

	return 0;
}