#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float Va, Vb, Vf;
	bool a, b, c;
	
	cout << "Informe o volume do tanque 1: ";
	cin >> Va;
	
	cout << "\nInforme o volume do tanque 2: ";
	cin >> Vb;
	
	a = Va > 850;
	b = Vb > 850;
	c = a ^ b;
	
	Vf = c ? Va + Vb : 0;
	
	cout << "\n\nO volume produzido e: " << Vf << "\n\n";
	
	system("pause");
	
	
	return 0;
}
