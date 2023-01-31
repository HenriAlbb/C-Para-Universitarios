#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float j, q, d, c;
	
	cout << "<Perda de carga de tubulação com formula de Hanzem-Williams>";
	
	cout << "\n\nInforme a vazao em (m3/s): ";
	cin >> q;
	
	cout << "\nInforme o diametro da tubulacao em (m): ";
	cin >> d;
	
	cout << "\nInforme o coeficiente de rugosidade do material: ";
	cin >> c;
	
	j = 10.643*pow(q, 1.85)*pow(d, -4.87)*pow(c, -1.85);
	
	cout << "\n\nA perda de carga da tubulacao e : " << j << " m/km\n\n";
	
	system("pause");
	
	return 0;
}
