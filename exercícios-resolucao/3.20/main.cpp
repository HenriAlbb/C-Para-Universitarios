#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float b, b1, h, h1;
	float q, w, a;
	float c, m, d;
	float y, t, s, z;
	float ixx;
	
	cout << "<Raio de giracao de uma secao L em cm>";
	
	cout << "\n\nInforme b e b1 em cm: ";
	cin >> b >> b1;
	
	cout << "\nInforme h e h1 em cm: ";
	cin >> h >> h1;
	
	q = 1 - (h1/h);
	cout << "h: " << q << "\n\n";
	w = 1 - (b1/b);
	cout << "b: " << w << "\n\n";
	a = (h1/h)/(b1/b);
	cout << "a: " << a << "\n\n";
	
	d = (1/a) - (b1/b);
	cout << "d: " << d << "\n\n";
	
	c = a - (h1/h);
	cout << "c: " << c << "\n\n";
	m = 1 - w*q;
	cout << "m: " << m << "\n\n";
	
	y = (1/4.0)*((1 - pow(w*q, 2.0))/((1/a) -w*d) - (((a -c*c*d)*(1 -w*q*q))/(m*m)));
	cout << "y: " << y << "\n\n";
	
	t = ((a*a -(c*c*c)*d)/(3.0*m)) - pow((a -(c*c)*d)/(2.0*m), 2.0);
	
	s = (1 - w*q*q*q)/(3.0*m) - pow(((1 - w*q*q)/(2.0*m)), 2.0);
	
	z = 1/(sqrt(((t + s)/2.0) - sqrt(pow((t - s)/2.0, 2.0) + y*y)));
	
	ixx = h/z;
	
	cout << "O raio de giracao ixx e: " << ixx << "\n\n";
	
	system("pause");
	
	
	return 0;
}
