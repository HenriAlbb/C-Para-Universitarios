#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float q, t, f, a, b, h;
	float y, r, s;
	float xv, xh;
	float k, n, m;
	
	cout << "<Momento, cortante e normal>";
	
	cout << "\n\nInforme os valores: \n";
	
	cout << "	Carga distribuida: ";
	cin >> q;
	
	cout << "	\nPeso especifico aparente: ";
	cin >> t;
	
	cout << "	\nAngulo de atrito interno: ";
	cin >> f;
	
	cout << "	\nAngulo do muro: ";
	cin >> a;
	
	cout << "	\nAngulo do talude: ";
	cin >> b;
	
	cout << "	\nAltura do muro: ";
	cin >> h;
	
	y = h*((2.0*t*h + 3.0*q)/(3.0*t*h + 6.0*q));
	cout << "\n\nY: " << y << "\n";
	r = ((t*h*h)/2.0) + q*h;
	s = (2.0/3.0)*f;
	
	xh = pow((sin((a+f)*(M_PI/180)))/((sin(a*(M_PI/180)))*(1 + sqrt(((sin((f + s)*(M_PI/180)))*sin((f - b)*(M_PI/180)))/(sin((a - s)*(M_PI/180))*sin((a + b)*(M_PI/180)))))), 2.0);
	xv = xh*(1.0/(tan((a-s)*(M_PI/180))));
	
	m = r*xh*(h-y);
	k = r*(xv*sin(a*(M_PI/180)) + xh*cos(a*(M_PI/180)));
	n = r*(xv*cos(a*(M_PI/180)) - xh*sin(a*(M_PI/180)));
	
	cout << "\n\nMomento: " << m << "\n";
	cout << "Cortante: " << k << "\n";
	cout << "Normal: " << n << "\n\n";
	
	system("pause");
	
	
	return 0;
}
