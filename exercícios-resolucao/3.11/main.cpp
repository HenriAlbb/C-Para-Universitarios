#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float x1, y1, x2, y2, x3, y3;
	float area, a, b, c, p, sp;
	
	cout << "Coordenadas (x y):";
	
	cout << "\nPonto 1: ";
	cin >> x1 >> y1;
	
	cout << "Ponto 2: ";
	cin >> x2 >> y2;
	
	cout << "Ponto 3: ";
	cin >> x3 >> y3;
	
	a = sqrt(pow(x2-x1, 2.0) + pow(y2-y1, 2.0));
	
	b = sqrt(pow(x3-x2, 2.0) + pow(y3-y2, 2.0));
	
	c = sqrt(pow(x1-x3, 2.0) + pow(y1-y3, 2.0));
	
	p = a + b + c;
	sp = p/2.0;
	
	area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
	
	cout << "\n\nDistancias:\n" << "a: " << a << "\nb: " << b << "\nc: " << c;
	cout << "\n\nArea: " << area;
	cout << "\nPerimetro: " << p << endl << endl;
	
	system("pause");
	
	
	return 0;
}
