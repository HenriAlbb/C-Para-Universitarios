#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float m, n, c, i;
	
	cout << "<Calculo de juros composto com capital>";
	
	cout << "\n\nInforme o capital inicial: ";
	cin >> c;
	
	cout << "Informe quantos meses decorridos: ";
	cin >> n;
	
	cout << "Informe a taxa de juros mensal em %: ";
	cin >> i;
	
	m = c*pow(1+(i/100), n);
	
	cout << "\n\nO montatante M" << n << " e: " << m << "\n\n";
	
	system("pause");
	
	return 0;
}
