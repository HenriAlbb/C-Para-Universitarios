#include <iostream>
#include <cmath>


using namespace std;

int main(int argc, char** argv) {
	
	float f, c;
	
	cout << "Informe a temperatura em Farenheit(F): ";
	cin >> f;
	
	c = ((f - 32)*5)/9;
	
	cout << "A temperatura em graus Celsius(C) e: " << c << endl;
	
	system("pause");
	
	return 0;
}
