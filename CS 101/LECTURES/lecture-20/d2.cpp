#include<simplecpp>

struct Posit{
	double x;
	double y;
	double z;
};

struct Star{
	Posit pos;
	double mass;
	char name[60];
	double temp;
	int numPlanets;
};

struct Galaxy{
	double mass;
	char name[60];
	double temp;
	int numPlanets;
};

main_program{

	Star a;
	cout << "Enter Star a mass\n";
	cin >> a.mass;
	cout << "Enter Star a name\n";
	cin.getline(a.name, 60);
	fflush(stdin);
	//cin >> a.name;
	cout << "Enter Star a num planets\n";
	cin >> a.numPlanets;

	cout << "Star a (" << a.name << ", " << a.mass << ", " << a.numPlanets << ")\n";


	Star b = {{100, -45, 23.6}, 100, "Sirius", 2350, 0};
	cout << "Star b ( [" << b.pos.x << ", " << b.pos.y << ", " << b.pos.z << "], " << b.name << ", " << b.mass << ", " << b.numPlanets << ")\n";

	Star c;
	c = b;
/*	c.pos.x = -1;
	c.pos.y = 3.09;
	c.pos.z = 23;
	//Etcetera		
*/

	cout << "Star c( [" << c.pos.x << ", " << c.pos.y << ", " << c.pos.z << "], " << c.name << ", " << c.mass << ", " << c.numPlanets << ")\n";

//	Star constellation[100];
}
	

