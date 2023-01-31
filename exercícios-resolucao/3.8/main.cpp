#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float x1, x2, y1, y2;
	float d;
	
	cout << "Informe as coordenadas do ponto no eixo x, (x1, y1): ";
	cin >> x1 >> y1;
	
	cout << "Informe as coordenadas do ponto no eixo y, (x2, y2): ";
	cin >> x2 >> y2;
	
	d = sqrt((pow(x2-x1, 2.0)) + (pow(y2-y1, 2.0)));
	
	cout << "\n\nDistancia entre os pontos: " << d << "\n\n";
	
	system("pause");
	
	
	return 0;
}
