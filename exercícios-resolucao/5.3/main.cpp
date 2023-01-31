#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float media, freq;
	
	cout << "Informe a media: ";
	cin >> media;
	
	cout << "\nInforme a frequencia em %: ";
	cin >> freq;
	
	freq /= 100;
	
	if(media >= 5 && freq >= 0.75) 
		cout << "\n\nAprovado\n\n";
	else
		cout << "\n\nReprovado\n\n"	;
		
	system("pause");
	
	return 0;
}
