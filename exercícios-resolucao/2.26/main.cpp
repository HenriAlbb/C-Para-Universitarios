#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float a, t, g;
	
	cout << "Informe a altura: ";
	cin >> a;
	
	cout << "Informe o tempo: ";
	cin >> t;
	
	g = (2*a)/t*t;
	
	cout << "A aceleracao da gravidade do sistema e: " << g << " m/s^2" << endl;
	
	system("pause");
	
	return 0;
}
