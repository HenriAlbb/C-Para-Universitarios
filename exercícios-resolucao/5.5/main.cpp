#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float a, b, media;
	
	cout << "Informe as duas notas: ";
	cin >> a >> b;
	
	media = (a+b)/2.0;
	
	if(media >= 5)
		cout << "\n\nMedia: " << media << ". " << "Aprovado\n\n";
	if(media < 5 && media >= 3)
		cout << "\n\nMedia: " << media << ". " << "Exame\n\n";
	if(media < 3)
		cout << "\n\nMedia: " << media << ". " << "Reprovado\n\n";
	
	system("pause")	;
	
	return 0;
}
