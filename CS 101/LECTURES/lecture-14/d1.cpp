#include <iostream>

using std::cin;
using std::cout;

int main(){

	float marks[1000];
	int n = 0;//Number of students
	
	do{
		cin >> marks[n];
		n++;
	}while(marks[n - 1] >= 0);
	n--;
	
/*
	cout << "________________\n";
	
	for(int i = 0; i < n; i++){
		cout << marks[n - 1 - i] << "\n";
	}
*/

	float mean = 0;
	float max = -1;
	for(int i = 0; i < n; i++){
		mean += marks[i];
		if(marks[i] > max){
			max = marks[i];
		}
	}
	mean /= n;

//	cout << "Mean: " << mean << "\n";
//	cout << "Max: " << max << "\n";

	int wholeMarks[1000];
	for(int i = 0; i < n; i++){
		wholeMarks[i] = marks[i] + 0.5;
	}

	int count[51];
	int cumulativeCount[51];
	for(int j = 0; j < 51; j++){
		count[j] = 0;
		cumulativeCount[j] = 0;
	}
	for(int i = 0; i < n; i++){
		count[wholeMarks[i]] += 1;
	}
//AT this point, count gives the number of occurrences of each mark.


	cumulativeCount[0] = count[0];
	for(int j = 1; j < 51; j++){
		cumulativeCount[j] = cumulativeCount[j - 1] + count[j];
	}

	for(int j = 0; j < 51; j++){
		cout << j << "\t" << count[j] << "\t" << cumulativeCount[j] << "\n";
	}
	
	//int y[] = {1, 2, 3, 4, 5, 6};
	//y[10]
	
	return 0;
}
