#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float m, p;
	
	cout << "Informar a distancia em milimetros: ";
	cin >> m;
	
	p = m/25.4;
	
	cout << "A distancia em polegadas e: " << p << endl;
	
	system("pause");
	
	return 0;
}
