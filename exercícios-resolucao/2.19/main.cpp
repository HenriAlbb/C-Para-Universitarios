#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float p, m;
	
	cout << "Informe a distancia em polegadas: ";
	cin >> p;
	
	m = p*25.4;
	
	cout << "A distancia em milimetros e: " << m << endl;
	
	system("pause");
	
	return 0;
}
