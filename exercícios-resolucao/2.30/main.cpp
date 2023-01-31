#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int num, digito_1, digito_2, digito_3, digito_4, digito_5;
	
	cout << "Digite um numero inteiro de 5 digitos: ";
	cin >> num;
	
	digito_1 = num/10000;
	
	digito_2 = num/1000;
	digito_2 = digito_2%10;
	
	digito_3 = num/100;
	digito_3 = digito_3%10;
	
	digito_4 = num/10;
	digito_4 = digito_4%10;
	
	digito_5 = num;
	digito_5 = digito_5%10;
	
	cout << endl << "Os digitos sao: ";
	cout << digito_1 << " "<< digito_2 << " " << digito_3 << " "<< digito_4 << " " << digito_5 << endl << endl;
	
	system("pause");
	return 0;
}
