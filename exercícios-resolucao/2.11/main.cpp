#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float a, b;
	
	cout << "Informe a altura e largura do retangulo: ";
	cin >> a >> b;
	
	cout << "O perimetro e: " << a+b << "\nA area e: " << a*b << endl;
	
	system("pause");
	return 0;
}
