#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float d, x1, y1, z1, x2, y2, z2;
	
	cout << "Informe as coordenadas do ponto 1 (x1, y1, z1): ";
	cin >> x1 >> y1 >> z1;
	
	cout << "Informe as coordenadas do ponto 2 (x2, y2, z2): ";
	cin >> x2 >> y2 >> z2;
	
	d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2) + pow(z2-z1, 2));
	
	cout << "\n\nDistancia: " << d << "\n\n";
	
	system("pause");
	return 0;
}
