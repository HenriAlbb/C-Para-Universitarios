#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float a, b, area, r;
	
	cout << "Informe a base do retangulo: ";
	cin >> a;
	
	cout << "Agora a altura: ";
	cin >> b;
	
	area = a*b;
	
	r = sqrt(area/M_PI);
	
	cout << "\n\nArea do retangulo: " << area;
	cout << "\nRaio do circulo para que a area seja igual: " << r << "\n\n";
	
	system("pause");
	
	return 0;
}
