#include <simplecpp>

int gcd(int a, int b){

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

void dashed(int l, int step){

	cout << "Inside dashed.\n";
	
	repeat(l / (2 * step)){
	
		penDown();
		forward(step);
		penUp();
		forward(step);
	
	}
	
}


main_program{

	cout << "Inside main\n";

	turtleSim();
	int numSides = 3;
	int length = 60;
	repeat(numSides){
	
		//forward(length);
		dashed(length, 5);
		left(360.0 / numSides);
		wait(0.5);
	}
	wait(4);


	/*
	int n = 36;
	int m = 24;
	int g1 = gcd(m, n);
	cout << "g1: " << g1 << "\n";

	n = 97;
	m = 41;
	int g2 = gcd(m, n);
	cout << "g2: " << g2 << "\n";
	*/
}

