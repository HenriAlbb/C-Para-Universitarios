#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float b1, h1, b, h;
	float u, ix;
	
	cout << "<Calculo do raio de giracao em relacao ao eixo x>";
	
	cout << "\n\nInforme o comprimento b1 e b: ";
	cin >> b1 >> b;
	
	cout << "\nInforme o comprimento h1 e h: ";
	cin >> h1 >> h;
	
	u = sqrt(12*((1 - (1 - (b1/b))*(1 - (h1/h)))/(1 - (1 - (b1/b))*(pow(1 - (h1/h), 3)))));
	
	ix = h/u;
	
	cout << "\n\nO raio de giracao e: " << ix << "\n\n";
	
	system("pause");
	
	return 0;
}
