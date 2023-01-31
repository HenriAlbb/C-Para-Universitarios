#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float r, volume;
	
	cout << "Informe o raio da esfera: ";
	cin >> r;
	
	volume = (4*M_PI*r*r*r)/3;
	
	cout << "O volume e: " << volume << endl;
	
	system("pause");
	
	
	
	return 0;
}
