#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float r, gr;
	
	cout << "Informe o angulo em radianos: ";
	cin >> r;
	
	gr = (200*r)/M_PI;
	
	cout << "O angulo em grados: " << gr << endl;
	
	system("pause");
	
	return 0;
}
