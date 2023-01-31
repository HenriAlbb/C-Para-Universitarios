#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float y, x;
	
	cout << "Informe um valor: ";
	cin >> x;
	
	y = (pow(x, 4.0/5.0)/(x - 3)) + (pow(M_PI, 2.0)/4.0) + (((2/3)*pow(x, 5))/(sin(x) + cos(x) + 1));
	
	cout << "\n\nResultado: " << y << "\n\n";
	
	system("pause");
	
	return 0;
}
