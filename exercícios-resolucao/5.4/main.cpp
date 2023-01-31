#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float n1, n2, n3, n4, media;
	float aulas, qtd_assis, freq;
	
	cout << "Informe as quatro notas: ";
	cin >> n1 >> n2 >> n3 >> n4;
	
	cout << "\nInforme a quantidade de aulas e as aulas assistidas: ";
	cin >> aulas >> qtd_assis;
	
	media = (n1*1 + n2*1 + n3*3 + n4*5)/(1+1+3+5);
	freq = (qtd_assis/aulas)*100;
	
	if(media >= 5 && freq >= 75)
		cout << "\n\nAprovado\n\n";
	else
		cout << "\n\nReprovado\n\n";
		
	system("pause");
	
	return 0;
}
