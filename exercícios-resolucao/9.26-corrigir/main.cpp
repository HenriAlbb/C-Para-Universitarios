#include <iostream>

using namespace std;

float y(float x){
	return (x*x + 1)/(x + 2);
}

int main(int argc, char** argv) {
	
	
	double xInicial, xFinal, passo, x;
	
	cout << "Informe o valor inicial, final e o passo de x, respectivamente: "; cin >> xInicial >> xFinal >> passo;
	
	for(double x = xInicial; xFinal>=x; x += passo){
		cout << "(" << x << ", " << y(x) << ")";
		cout << endl;
	}
	
	cout << endl;
	system("pause");
	
	return 0;
}
