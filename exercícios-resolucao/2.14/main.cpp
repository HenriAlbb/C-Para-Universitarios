#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float r, c, a;
	
	cout << "Informe o raio do circulo: ";
	cin >> r;
	
	c = 2*M_PI*r;
	a = M_PI*r*r;
	
	cout << "A area e: " << a << "O comprimento e: " << c << endl;
	
	system("pause");
	
	return 0;
}
