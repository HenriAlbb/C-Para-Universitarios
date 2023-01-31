#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float x;
	
	cout << "Informe um numero: ";
	cin >> x;
	
	if(x > 0)
		cout << "\n\nPositivo\n\n";
	if(x == 0)
		cout << "\n\nNulo\n\n";
	if(x < 0)
		cout << "\n\nNegativo\n\n";		
		
	system("pause");
	
	return 0;
}
