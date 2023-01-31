#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float a, b, r;
	float area1, area2, perimetro1, perimetro2;
	
	cout << "Informe os lados de um retangulo: ";
	cin >> a >> b;
	
	cout << "Informe o raio de um circulo: ";
	cin >> r;
	
	area1 = a*b;
	area2 = M_PI*r*r;
	
	perimetro1 = 2*(a+b);
	perimetro2 = 2*M_PI*r;
	
	cout << "\n\nAreas: " << area1 << " m2, " << area2 << " m2";
	cout << "\nPerimetro: " << perimetro1 << " m, " << perimetro2 << " m";
	
	cout << "\n\nMenor area: ";
	
	if(area1 < area2)
		cout << "retangulo";
	else
		cout << "circulo";
		
	cout << "\n\nMaior perimetro: ";	
		
	if(perimetro1 > perimetro2)	
		cout << "retangulo";
	else
		cout << "circulo";
		
	cout << "\n\n"	;
	
	system("pause");
	
	return 0;
}
