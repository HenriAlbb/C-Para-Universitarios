#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float x0, y0, x, y, d;
	
	cout << "Informe as coordenadas da origem, x0 y0: ";
	cin >> x0 >> y0;
	
	cout << "\nInforme as coordenadas do ponto especifico, x y: ";
	cin >> x >> y;
	
	d = sqrt((pow(x-x0, 2)) + (pow(y-y0, 2)));
	
	cout << "\n\nDistancio ate a origem: " << d << "\n\n";
	
	system("pause");
	
	return 0;
}
