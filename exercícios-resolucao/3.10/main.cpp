#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float a, b, c;
	float p, sp, area;
	
	cout << "<<Area e perimetro do triangulo>>";
	
	cout << "\n\nLado 1: ";
	cin >> a;
	
	cout << "Lado 2: ";
	cin >> b;
	
	cout << "Lado 3: ";
	cin >> c;
	
	p = a + b + c;
	sp = (a + b + c)/2.0;
	
	area = sqrt(sp*(sp - a)*(sp - b)*(sp - c));
	
	cout << "\n\nArea: " << area;
	cout << "\nPerimetro: " << p << "\n\n";
	
	system("pause");
	
	return 0;
}
