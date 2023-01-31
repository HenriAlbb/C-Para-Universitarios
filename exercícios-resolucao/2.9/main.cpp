#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	float prova_1, prova_2, trab_teoria, trab_lab, result;
	
	cout << "Nota prova 1: ";
	cin >> prova_1;
	
	cout << "Nota prova 2: ";
	cin >> prova_2;
	
	cout << "Nota trabalho de teoria: ";
	cin >> trab_teoria;
	
	cout << "Nota trabalho de laboratorio: ";
	cin >> trab_lab;
	
	result = (prova_1*3 + prova_2*5 + trab_teoria + trab_lab)/(10);
	
	cout << "Sua media e: " << result << endl << endl;
	
	system("pause");
	return 0;
}
