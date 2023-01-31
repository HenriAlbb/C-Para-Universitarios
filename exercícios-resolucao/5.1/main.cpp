#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float a, b, media;
	
	cout << "Nota 1: ";
	cin >> a;
	
	cout << "Nota 2: ";
	cin >> b;
	
	media = (a*3 + a*5)/(3.0+5.0);
	
	if(media >= 5)
		cout << "\n\n" << media << ", Aprovado";
	else
		cout << "\n\n" << media << ", Reprovado";
		
	cout << "\n\n";
	
	system("pause");
	
	return 0;
}
