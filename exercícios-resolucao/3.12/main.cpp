#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float a, b, c;
	float m, n, r;
	
	cout << "Informe os lados do triangulo: ";
	cin >> a >> b >> c;
	
	m = acos((b*b + c*c - (a*a))/(2*b*c))*(180/M_PI);
	
	n = acos((a*a + c*c -(b*b))/(2*a*c))*(180/M_PI);
	
	r = acos((a*a + b*b -(c*c))/(2*a*b))*(180/M_PI);
	
	cout << "\n\nAngulos: ";
	cout << "\nA: " << m;
	cout << "\nB: " << n;
	cout << "\nC: " << r << "\n\n";
	
	system("pause");
	
	return 0;
}
