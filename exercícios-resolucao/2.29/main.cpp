#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int numero, valor_decimal, bin;
	
	cout << "Informe um numero inteiro de 4 digitos binario: ";
	cin >> numero;
	
	bin = numero%10;
	valor_decimal = bin;
	numero = numero/10;
	
	bin = numero%10;
	valor_decimal += 2*bin;
	numero = numero/10;
	
	bin = numero%10;
	valor_decimal += 2*2*bin;
	numero = numero/10;
	
	bin = numero%10;
	valor_decimal += 2*2*2*bin;
	
	cout << "O valor na base decimal e: " << valor_decimal << endl << endl;
	
	system("pause");
	return 0;
}
