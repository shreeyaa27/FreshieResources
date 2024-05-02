#include<iostream>

#define NDEBUG

#include <cassert>

using std::cin;
using std::cout;

bool contains(char s[], char letter){

	for(int i = 0; s[i] != '\0'; i++){
		if(s[i] == letter){
			return true;
		}
	}

	return false;

}

void concatenate(char dest[], char src1[], char src2[]){

	int i;
	for(i = 0; src1[i] != '\0'; i++){
		dest[i] = src1[i];
	}
	dest[i] = ' ';
	i++;
	for(int j = 0; src2[j] != '\0'; j++){
		dest[i] = src2[j];
		i++;
	}
	dest[i] = '\0';	

}


int main(){

/*	cout << "Enter positive number.\n";
	int n;
	cin >> n;
	assert(n > 0);	
	cout << "User listened to instruction.\n";
*/

	//char a[20] = "Laptop";
//	char b[8];
//	cout << "Enter b\n";
	//cin >> b;
//	cin.getline(b, 12);
	//cout << "a: " << a << "\n";
//	cout << "b: " << b << "\n";	

	char s[20], l;
	cout << "Enter s\n";
	cin >> s;
	
	cout << "Enter l";
	cin >> l;
	
	if(contains(s, l)){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}

	char d[30];
	concatenate(d, "Hello", "Happy");
	cout << "d: " << d << "\n";

	return 0;

}
