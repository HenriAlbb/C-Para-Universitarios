#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float x1, b, a, c;
	
	cout << "Informe tres valores: ";
	cin >> a >> b >> c;
	
	x1 = (-b + sqrt(b*b -(4*a*c)))/(2*a);
	
	cout << "\n\nResultado: " << x1 << "\n\n";
	
	system("pause");
	
	return 0;
}
