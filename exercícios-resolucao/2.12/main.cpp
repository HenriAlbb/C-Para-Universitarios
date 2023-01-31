#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float bma, bme, alt, area;
	
	cout << "Informe a base maior, menor e altura do trapezio, respectivamente: ";
	cin >> bma >> bme >> alt;
	
	area = ((bma + bme)*alt)/2;
	
	cout << "A area do trapezio e: " << area << endl;
	
	system("pause");
	
	
	return 0;
}
