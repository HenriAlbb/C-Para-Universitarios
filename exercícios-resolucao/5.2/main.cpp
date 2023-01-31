#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float prova1, prova2, trab_teo, trab_lab, media;
	
	cout << "Prova 1: ";
	cin >> prova1;
	
	cout << "Prova 2: ";
	cin >> prova2;
	
	cout << "Trabalho de Teoria: ";
	cin >> trab_teo;
	
	cout << "Trabalho de Laboratorio: ";
	cin >> trab_lab;
	
	media = (prova1*3 + prova2*5 + trab_teo*1 + trab_lab*1)/(3+5+1+1);
	
	if(media >= 5)
		cout << "\n\nMedia: " << media << "." << " Aprovado\n\n";
	else
		cout << "\n\nMedia: " << media << "." << " Reprovado\n\n";
		
		system("pause");

	
	return 0;
}
