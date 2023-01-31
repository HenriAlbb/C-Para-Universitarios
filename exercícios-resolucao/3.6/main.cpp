#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float x1, x2, a, b, c;
	
	cout << "Informe os coeficientes a, b e c, repectivamente: ";
	cin >> a >> b >> c;
	
	x1 = (-b + sqrt(b*b -4*a*c))/(2*a);
	
	x2 = (-b - sqrt(b*b -4*a*c))/(2*a);
	
	cout << "\n\nX1 = " << x1 << ", " << "X2 = " << x2 << "\n\n";
	
	system("pause");
	
	return 0;
}
