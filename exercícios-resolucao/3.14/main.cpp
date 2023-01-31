#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	float x, y, resultado;
	
	cout << "Informe o valor da base: ";
	cin >> x;
	
	cout << "Agora o valor da potencia: ";
	cin >> y;
	
	resultado = exp(y*log(x));
	
	cout << "\n\nResultado: " << resultado << "\n\n";
	
	system("pause");
	
	return 0;
}
