#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float z1, a1, b1;
	float z2, a2, b2;
	float ad1, ad2, sub1, sub2, mult1, mult2, div1, div2;
	
	cout << "<Numeros complexos z = a + b*i>";
	
	cout << "\n\nInforme a1: ";
	cin >> a1;
	
	cout << "\nInforme b1: ";
	cin >> b1;
	
	cout << "\nInforme a2: ";
	cin >> a2;
	
	cout << "\nInforme b2: ";
	cin >> b2;
	
	ad1 = a1 + a2;
	ad2 = b1 + b2; 
	
	sub1 = a1 - a2;
	sub2 = b1 - b2; 
	
	mult1 = (a1*a2 - b1*b2);
	mult2 = (a1*b2 + a2*b1);
	
	div1 = (a1*a2 + b1*b2)/(a2*a2 + b2*b2);
	div2 = (a1*b2 - a2*b1)/(a2*a2 + b2*b2);
	
	
	
	cout << "\n\nAdicao: " << ad1 << " + " << ad2 << "i" << "\n";
	cout << "\n\nSubtracao: " << sub1 << " + " << sub2 << "i" << "\n";
	cout << "\n\nMultiplicacao: " << mult1 << " + " << mult2 << "i" << "\n";	
	cout << "\n\nDivisao: " << div1 << " + " << div2 << "i" << "\n\n";
	
	system("pause");
	
	return 0;
}
