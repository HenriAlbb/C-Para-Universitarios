#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float y, b, c, a;
	
	cout << "Informe tres valores: ";
	cin >> b >> c >> a;
	
	y = acos(((b*b) + (c*c) - (a*a))/(2*b*c))*(180/M_PI);
	
	cout << "\n\nResultado: " << y << "\n\n";
	
	system("pause");
	
	return 0;
}
