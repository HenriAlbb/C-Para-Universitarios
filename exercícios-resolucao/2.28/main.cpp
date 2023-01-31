#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int p;
	
	cout << "Informe o preco do produto: " << endl;
	cin >> p;
	
	int valor_100 = p/100;
	p = p%100;
	
	int valor_50 = p/50;
	p = p%50;
	
	int valor_20 = p/20;
	p = p%20;
	
	int valor_10 = p/10;
	p = p%10;
	
	int valor_5 = p/5;
	p = p%5;
	
	int valor_2 = p/2;
	p = p%2;
	
	int valor_1 = p/1;
	p = p%1;
	
	int menor_quantidade = valor_100 + valor_50 + valor_20 + valor_10 + valor_5 + valor_2 + valor_1;
	
	cout << "A menor quantidade de notas e: " << menor_quantidade << endl << endl;
	
	system("pause");
	
	return 0;
}

