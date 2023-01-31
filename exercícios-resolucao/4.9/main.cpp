#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float a, b, c;
	
	cout << "Informe a variavel a e b, repectivamente: ";
	cin >> a >> b;
	
	c = a > b ? a*2 : 3*b;
	
	cout << "\n\nC: " << c << "\n\n";
	
	system("pause");
	
	return 0;
}
