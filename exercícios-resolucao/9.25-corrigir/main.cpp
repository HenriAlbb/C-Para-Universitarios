#include <iostream>

using namespace std;

float y(float x){
	return (x*x + 1)/(x + 2);
}

int main(int argc, char** argv) {
	
	
	float xInicial, xFinal, passo;
	
	cout << "Informe o valor inicial, final e o passo de x, respectivamente: "; cin >> xInicial >> xFinal >> passo;
	
	for(float x = xInicial; x<xFinal; x= x + passo){
		cout << "(" << x << ", " << y(x) << ")";
		cout << endl;
	}
	
	cout << endl;
	system("pause");
	
	return 0;
}
